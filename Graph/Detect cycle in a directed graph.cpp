//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool dfs(int node,vector<int> adj[], vector<bool>&visited, vector<bool>&dfsVisited) 
    {
        visited[node] = true;
        dfsVisited[node] = true;
        
        for(auto nextNode : adj[node])
        {
          if(!visited[nextNode])
          {
              if(dfs(nextNode,adj,visited,dfsVisited))
              {
                  return true;
              }
          }
          else if(dfsVisited[nextNode]==true)
          {
              return true;
          }
        }
        dfsVisited[node] = false;
        return false;
        
    }// Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
       vector<bool>visited(V,false);
       vector<bool>dfsVisited(V,false);
       for(int i=0;i<V;i++)
       {
           if(!visited[i])
           {
               if(dfs(i,adj,visited,dfsVisited))
               {
                   return true;
               }
           }
       }
       return false;// code here
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends
