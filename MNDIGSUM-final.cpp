#include <bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    cin>>Q;
    if((Q>=1)&&(Q<=300))
    {
    for(int j=0;j<Q;j++)
    {
        int n,l,r,B,sum,temp,min;
        cin>>n>>l>>r;
        
            if(r>n)
            B=r;
            if((n>l)&&(n<r))
            B=n;
            else
            {
                int min=INT_MAX;
                // for(int i=l;i<=r;i++)
                for(int i=r;i>=l;i--)
                {
                    sum=0;
                    temp=n;
                    while(temp>0)
                    {
                        sum=sum+temp%i;
                        temp=temp/i;
                        if(sum>min)
                        break;
                    }
                    if(min>sum)
                    {
                        min=sum;
                        B=i;
                    }
                    if(min==1)
                    break;
                }
                cout<<B<<endl;
            }
    }
    }
	return 0;
}
