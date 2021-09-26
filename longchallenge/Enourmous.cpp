#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,k,t,i,count=0;
	cin>>n>>k;
	i=1;
	while(i<=n)
	{
	    cin>>t;
	    if(t%k==0)
	    count++;
	    i++;
	}
	cout<<count;
	return 0;
}
