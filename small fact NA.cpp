#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,t,fact=1;
	cin>>n;
	while(n>0)
	{
	    cin>>t;
	    for(int i=1;i<=t;i++)
	    {
	        fact=fact*i;
	    }
	    cout<<fact<<endl;
	    fact=1;
	    n--;
	}
	return 0;
}
