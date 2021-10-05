#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    for(int z=0;z<T;z++)
    {
        int n;
        cin>>n;
        if(n==1)
        {
        cout<<1<<endl;
        continue;
        }
        int a=(int)log2(n);
        int b=pow(2,a);
        int c=n-b+1;
        if(n==b)
        cout<<n/2<<endl;
        else cout<<max(b/2,c)<<endl;
        
    }
	return 0;
}
