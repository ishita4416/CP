#include <bits/stdc++.h>
using namespace std;
 // matrix rotation 90 deg counterclock
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
    temp[i][j]=mat[j][i];
    }
    }
    for(int i=m-1;i>=0;i--)
    {
    for(int j=0;j<n;j++)
    {
    cout<<temp[i][j]<<" ";
    }
    cout<<endl;
    }
	return 0;
}
 