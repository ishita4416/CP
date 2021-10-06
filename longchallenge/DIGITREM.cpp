#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int T;
	cin>>T;
	for(int z=0;z<T;z++)
	{
	    int n,l,d,pos=0;
	    cin>>n>>d;
	    int m=n,ans=0;
	    while(m>0)
	    {
	        l=m%10;
	        m=m/10;
	        pos++;
	        if(l==d)
	        {
	            m=m*pow(10,pos)+(d+1)*pow(10,pos-1);
	            ans=m-n;
	            pos=0;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}