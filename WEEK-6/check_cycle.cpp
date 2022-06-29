#include <bits/stdc++.h>
using namespace std;
class Solution {
    bool checkforcycle(int s,int V,vector<int>&vis,vector<int>adj[])
    {
         queue<pair<int,int>>q;
           vis[s]=true;
           q.push({s,-1});
           while(!q.empty())
           {
               int node=q.front().first;
               int prev=q.front().second;
               q.pop();
               for(auto it:adj[node])
               {
                   if(!vis[it])
                   {
                       vis[it]=true;
                       q.push({it,node});
                   }
                   else if(prev!=it)
                   return true;
               }

           }
           return false;
    }


  public:
    bool isCycle(int V, vector<int> adj[]) {
        vector<int>vis(V+1,0);
    for(int i=0;i<V;i++)
    {
        if(!vis[i])
        {
            if(checkforcycle(i,V,vis,adj))
            return true;
        }
    }
    return false;
    }
};
int main() {
    int V, E;
      	cout<<"Enter no. of Vertex and Edges"<<endl;
		cin >> V >> E;
		vector<int>adj[V+1];
		cout<<"Enter the Edges"<<endl;
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "cycle found \n";
        else
            cout << "No cycle \n";
    return 0;
}
