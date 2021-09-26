#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	if((T>=1)&&(T<=100))
	for(int i=0;i<T;i++)
	{
	    int N,A,sq;
	    cin>>N>>A;
	    sq=(int)(sqrt(N));
	    int res=sq*A;
	    cout<<res<<endl;
	}
	return 0;
}
