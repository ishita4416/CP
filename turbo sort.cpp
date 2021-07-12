#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int a[1000001]={0};
    int n,t,i;
    cin>>t;
    while(t--) 
    {
        cin>>n;
        a[n]++;
    }
    for(i=0; i<=1000000; i++) 
    {
        while(a[i]>0) 
        {
            cout<<i<<endl;
            a[i]--;
        }
    }
	return 0;
}
