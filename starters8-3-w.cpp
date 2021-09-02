#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	if((T>=1)&&(T<=20))
	for(int k=0;k<T;k++)
	{
	    int N,M,Q,i,flag=1,s=0;
	    int a[N]={0};
	    cin>>N>>M>>Q;
	    for(int j=0;j<Q;j++)
	    {
	        char sign;
	        int i;
	        cin>>sign>>i;
	        
	        if(s>M)
          {
               flag=0;
          }
          
	        if(sign=='+')
          {
               a[i-1]++;
               s++;
               if(a[i-1]<0)
               flag=0;
          }
          
          if(sign=='-')
          {
               a[i-1]--;
               s--;
               if(a[i-1]<0)
               flag=0;
          }

        }
         for(int l=0;l<N;l++)
        {
              if(a[l]<0)
                   flag=0;
    	}
    	if(flag)
    	cout<<"Consistent\n";
    	else 
    	cout<<"Inconsistent\n";
	}
	return 0;
}
