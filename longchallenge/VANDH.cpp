#include <bits/stdc++.h>
using namespace std;
int main() {
	int T;
	cin>>T;
	for(int z=0; z<T; z++)
	{
	    int N, M;
	    string str="";
	    cin>>N>>M;
	    if(N==M)
	    {
	    //len=2*(N+1);
	    for(int i=0;i<N+1;i++)
	    str+="01";
	    }
	    else if(N>M)
	    {
	    //len=(N*2)+3*(M-N-1)+1;
	    for(int i=0;i<M+1;i++)
	    str+="01";
	    str+="0";
	    for(int i=0;i<N-M-1;i++)
	    str+="010";
	    }
	    else
	    {
	    //len=(M*2)+3*(N-M-1)+1;
	    for(int i=0;i<N+1;i++)
	    str+="10";
	    for(int i=0;i<M-N-1;i++)
	    str+="110";
	    str+="1";
	    }
	    cout<<str.size()<<endl<<str<<endl;
	}
	return 0;
}
