#include <bits/stdc++.h>
using namespace std;

int lcs(string a, string b, int m, int n, vector<vector<int>> &dp)
{
    if(m==0||n==0)
    return 0;
    if(a[m-1]==b[n-1])
    return dp[m][n] = 1 + lcs(a,b,m-1,n-1,dp);
    if(dp[m][n]!=-1)
    return dp[m][n];
    return dp[m][n] = max(lcs(a,b,m-1,n,dp), lcs(a,b,m,n-1,dp));
}
int main() {
    string a, b;
    getline(cin,a);
    getline(cin,b);
    int m=a.length();
    int n=b.length();
    vector<vector<int>> dp(m+1, vector<int>(n+1,-1));
    cout<<lcs(a,b,m,n,dp);
	return 0;
}
