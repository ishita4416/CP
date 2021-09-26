#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,t,fact=1;
	cin>>n;
	while(n>0)
	{
	    cin>>t;
	    if((t>=1)&&(t<=100)&&(n>=1)&&(n<=100))
	    {
    for(int i=1;i<=t;i++)
    {
        fact=fact*i;
    }
    cout<<fact<<endl;
    fact=1;
    n--;
	}
	}
	return 0;
}
