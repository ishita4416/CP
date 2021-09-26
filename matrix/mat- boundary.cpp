#include <bits/stdc++.h>
using namespace std;
 // matrix boundary elements
int main() {
    int m,n;
    cin>>m>>n;
    int mat[m][n],temp[n][m];
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    cin>>mat[i][j];
    for(int i=0;i<m;i++)
    {
    for(int j=0;j<n;j++)
    {
    if(i==0 || j==0 || i==n-1 || j==n-1)
    cout<<mat[i][j]<<" ";
    else 
    cout<<"  ";
    }
    cout<<endl;
    }
	return 0;
}
 