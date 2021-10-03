#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    for(int z=0;z<T;z++)
    {
        float A,B,C,D,sum=0;
        cin>>A>>B>>C>>D;
        sum=A+B+C;
        if(sum<=D)
        cout<<1<<endl;
        else if((A+B)<=D)
        cout<<2<<endl;
        else 
        cout<<3<<endl;
    }
	return 0;
}
