#include <bits/stdc++.h>
using namespace std;
 // spiraling through a matrix
int main() {
    int m,n,k=0,l=0,i;
    cin>>m>>n;
    int mat[m][n];
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    cin>>mat[i][j];
    while(k<m && l<n)
    {
        for(i=l;i<n;i++)
        cout<<mat[k][i]<<" ";
        k++;
        for(i=k;i<m;i++)
        cout<<mat[i][n-1]<<" ";
        n--;
        if(k<m)
        {
            for(i=n-1;i>=l;i--)
            cout<<mat[m-1][i]<<" ";
            m--;
        }
        if(l<n)
        {
            for(i=m-1;i>=k;i--)
            cout<<mat[i][l]<<" ";
            l++;
        }
        
    }
	return 0;
}
 