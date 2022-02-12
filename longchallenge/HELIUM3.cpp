#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	for( int i=0; i<T;i++)
	{
	    int a,b,x,y,p1,p2;
	    cin>>a>>b>>x>>y;
	    p1 = a*b;
	    p2 = x*y;
	    if(p2>=p1)
	    cout<<"Yes\n";
	    else
	    cout<<"No\n";
	}
	return 0;
}