#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    for(int z=0;z<T;z++)
    {
        int x;
        cin>>x;
        if(x==0)
        {
            cout<<1<<endl;
            continue;
        }
        if(x==1)
        {
            cout<<2<<endl;
            continue;
        }
        int a=(int)log2(x);
        int b=pow(2,a);
        if(x==b)
        cout<<x<<endl;
        else if (x==(2*b-1))
        cout<<x+1<<endl;
        else cout<<b<<endl;
        
    }
	return 0;
}