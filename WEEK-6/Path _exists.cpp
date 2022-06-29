#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void bfs(vector<int>adj[],bool vis[],int S)
{
    stack<int>st;
    st.push(S);
    vis[S]=true;
    while(!st.empty())
    {
        int node=st.top();
        st.pop();
        for(int itr:adj[node])
        {
            if(!vis[itr])
            {
                st.push(itr);
                vis[itr]=true;
            }
        }
    }
}
bool connected(vector<int>adj[],int S,int D,int V)
{
    bool vis[V+1]={false};
    bfs(adj,vis,S);
    return vis[D];
}
int main()
{
     int V, E;
     int S,D;
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
        cout<<"Enter Source and Destination node:"<<endl;
        cin>>S>>D;
        bool ans=(connected(adj,S,D,V));
        cout<<endl;
        if(ans)
            cout<<"Path exists"<<endl;
        else
            cout<<"Path Do not exists"<<endl;
            return 0;
}
