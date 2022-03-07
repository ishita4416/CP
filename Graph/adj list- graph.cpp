#include <bits/stdc++.h>
using namespace std;
// adjacency list implementation using vector

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int V)
{
    for(int v=0;v<V;v++)
    {
        cout<<"Adjacency list of vertex "<<v<<": ";
        for(auto x: adj[v])
        cout<<x<<" ";
        cout<<endl;
    }
}
int main() {
	int V;
	cin>>V;
	vector<int> adj[V];
	int u,v;
	for(int i=0;i<V;i++)
	{
	    cin>>u>>v;
	    addEdge(adj,u,v);
	}
	printGraph(adj,V);
	return 0;
}
