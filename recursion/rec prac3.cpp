#include <bits/stdc++.h>
using namespace std;

int rec(int n, int k)
{
   if(n==1)
   return n;
   return (rec(n-1,k)+k-1)%n+1;
}
int main() {
    int n,k;
    cin>>n>>k;
    cout<<rec(n,k);
	return 0;
}
