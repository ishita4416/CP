#include <bits/stdc++.h>
using namespace std;
//adjacency matrix implementation
class Graph{
    int n;
    int g[10][10];
    public:
    Graph(int x)
    {
        n=x;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                g[i][j]=0;
            }
        }
    }
    void addEdge(int x, int y)
    {
        g[x][y]=1;
        g[y][x]=1;
    }
    void removeEdge(int x, int y)
    {
        g[x][y]=0;
        g[y][x]=0;
    }
    void printMat()
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            cout<<g[i][j]<<" ";
            cout<<endl;
        }
    }
};
int main() {
	int n,x,y;
	cin>>n>>x>>y;
	Graph obj(n);
	int noe,xi,yi;
	cin>>noe;
	for(int i=0;i<noe;i++)
	{
	    cin>>xi>>yi;
	    obj.addEdge(xi,yi);
	}
	cout << "Adjacency matrix after edge insertions:\n";
    obj.printMat();
 
    obj.removeEdge(x, y);
 
    cout << "\nAdjacency matrix after edge removal:\n";
    obj.printMat();
	return 0;
}
