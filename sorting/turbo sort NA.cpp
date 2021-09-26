#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n[50],i;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>n[i];
	}
	sort(n,n+t);
	for(i=0;i<t;i++)
	{
	    cout<<n[i]<<endl;
	}
	return 0;
}
