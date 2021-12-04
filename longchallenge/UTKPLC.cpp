#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	for(int z=0; z<T; z++)
	{
	    char f,s,t;
	    char x,y;
	    cin>>f>>s>>t;
	    cin>>x>>y;
	    if(x==f || y==f)
	    cout<<f<<endl;
	    else if(x==s || y==s)
	    cout<<s<<endl;
	    else cout<<t<<endl;
	}
	return 0;
}
