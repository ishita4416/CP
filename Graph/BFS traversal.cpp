#include <bits/stdc++.h>
using namespace std;
//BFS traversal
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void BFS(vector<int> adj[], int V)
{
    bool visited[V+1];
    for(int i=1;i<=V;i++)
    visited[i]=false;
    queue<int> q;
    int s = 1;
    visited[s] = true;
    q.push(s);
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout<<node<<" ";
        for(int i=0;i<adj[node].size();i++){
            if(visited[adj[node][i]] == false){
                visited[adj[node][i]] = true;
                q.push(adj[node][i]);
            }
        }
    }
}
int main() {
	int V;
	cin>>V;
	vector<int> adj[V+1];
	int u,v;
	for(int i=1;i<=V+1;i++)
	{
	    cin>>u>>v;
	    addEdge(adj,u,v);
	}
	BFS(adj,V);
	return 0;
}
