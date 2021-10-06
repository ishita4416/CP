#include <bits/stdc++.h>
using namespace std;

 bool binse(int v[],int l,int h,int d)
 {
     if(l>h)
     return -1;
     int mid=l+(h-l)/2;
     if((v[mid]==d)&&(mid==0 || v[mid-1]!=d))
     return mid;
     if(v[mid]>=d)
     return binse(v,l,mid-1,d);
     else 
     return binse(v,mid+1,h,d);
 }
int main() {
    int T;
    cin>>T;
    for(int z=0;z<T;z++)
    {
        int n,d,ans;
        cin>>n>>d;
        vector<int> v;
        while(n)
        {
            v.push_back(n%10);
            n/=10;
        }
        reverse(v.begin(),v.end());
        int l=0,h=n-1;//lower limit and higher limit
        int pos=binse(v,l,h,d);
        if(pos>=0)
        {
            if(d==0)
            {
                while(pos<v.size())
                {
                v[pos]=1;
                pos++;
                }
                string str(v.begin(),v.end());
                ans=str-n;
            }
            else if(d==9)
            {
                while(pos<v.size())
                {
                    if(pos==0 || (pos==1 && v[0]==8))
                    ans=pow(10,v.size())-n;
                    else
                    ans=((v[pos-1]+1)*pow(10,v.size()-1))-n;
                }
            }
            else 
            ans=((v[pos]+1)*pow(10,v.size()-pos))-n;
        }
        else 
        ans=0;
        cout<<ans;
    }
	return 0;
}
