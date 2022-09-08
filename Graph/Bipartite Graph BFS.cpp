//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	bool isBipartite(int V, vector<int>adj[]){
	  queue<pair<int,int>>q;
      vector<int>color(V,-1);
      for(int i=0;i<V;i++)
      {
          if(color[i]==-1)
          {
          q.push({i,1});
          color[i]=1;
          while(!q.empty())
          {
              auto x = q.front();
              q.pop();
              int node = x.first;
              int c = x.second;
              for(auto p:adj[node])
              {
                  if(color[p]== c)
                  {
                      return false;
                  }
                  if(color[p] == -1)
                  {
                      q.push({p,1-c});
                      color[p] = 1-c;
                  }
              }
          }
          }
      }
      return true;
      }// Code here

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}
// } Driver Code Ends
