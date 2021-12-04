#include <bits/stdc++.h>
using namespace std;
int main() {
	int T;
	cin>>T;
	for(int z=0; z<T; z++)
	{
	    int N;
	    cin>>N;
	    int A[N];
	    for(int i=0;i<N;i++)
	    cin>>A[i];
	    if(N==1)
	    cout<<"0"<<endl;
	   // else if(N==2 && A[0]!=A[1])
	   // cout<<"-1"<<endl;
	   // else if(N==2 && A[0]==A[1])
	   // cout<<"1"<<endl;
	    else{
	    unordered_map<int, int> mp;
        for(int i=0; i<N; i++)
        mp[A[i]]++;
        int maxc=0, res= -1;
        for(auto l: mp)
        {
            if(maxc < l.second){
            res=l.first;
            maxc=l.second;
            }
        }
        int var= N- maxc;
        int op=var+1;
        if(maxc==1)
        cout<<"-1\n";
        else if(maxc==N)
        cout<<"0\n";
        else cout<<op<<endl;
	    }
	}
	return 0;
}
