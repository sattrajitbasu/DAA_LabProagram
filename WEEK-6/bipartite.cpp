#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
bool bipartite_bfs(int ver,vector<int>adj[],vector<int>color)
{
    queue<int>q;
    q.push(ver);
    color[ver]=1;
    while(!q.empty())
   {
        int node=q.front();
        q.pop();
        for(auto itr:adj[node])
    {
            if(color[itr]==-1)
            {
                 q.push(itr);
                color[itr]=1-color[node];
             }
          else if(color[itr]==color[node])
        {
            return false;
        }
    }

     }
 return true;
}
	bool isBipartite(int V, vector<int>adj[]){
	    vector<int>vis(V+1,-1);
    for(int i=0;i<V;i++)
        {
            if(vis[i]==-1)
            {
                if(!bipartite_bfs(i,adj,vis))
                    return false;
            }
        }
	   return true;
	}
};
int main(){
		int V, E;
		cout<<"Enter no. of Vertex and Edges"<<endl;
		cin >> V >> E;
		vector<int>adj[V+1];
		cout<<"Enter the Edges"<<endl;
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);
		if(ans)cout << "Bipartite\n";
		else cout << "Not Bipartite\n";
	return 0;
}
