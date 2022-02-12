#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    int A[N];
	    int flag = 0;
	    for(int i=1; i<=N; i++)
	    {
	        cin>>A[i];
	        if(A[i] == i)
	        flag = 1;
	    }
	    int c = 0;
        if(flag)
        {
            for(int i=1; i<=N; i++)
            {
                int t = i + c;
                if(t == A[i])
                c++;
            }
            cout<<c<<endl;
        }
	    else
	    cout<<0<<endl;
	}
	return 0;
}
