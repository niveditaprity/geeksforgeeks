bool dfs(int node,vector<int>adj[],vector<bool>&vis,int parent)
{
    vis[node]=true;
    for(auto it:adj[node])
    {
        if(vis[it]==false)
        {
        if(dfs(it,adj,vis,node))
        {
            return true;
        }
        }
        else if(it!=parent)
        {
            return true;
        }
    }
    return false;
}
bool isCyclic(vector<int> g[], int V)
{
  vector<bool>vis(V,false);
  for(int i=0;i<V;i++)
  {
    if(vis[i]==false)
     {
      if(dfs(i,g,vis,-1))
      {
          return true;
      }
  }
  }
  return false;// Your code here
   
}
