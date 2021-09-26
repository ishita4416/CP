#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    if((T>=1)&&(T<=36000))
    {
    for(int i=0;i<T;i++)
    {
        int A,B,C,D,E,sm;
        cin>>A>>B>>C>>D>>E;
        if((A>=1)&&(A<=10)&&(B>=1)&&(B<=10)&&(C>=1)&&(C<=10)&&(D>=15)&&(D<=20)&&(E>=5)&&(E<=10))
        {
            if( ((A+B<=D)&&(C<=E)) || ((B+C<=D)&&(A<=E)) || ((A+C<=D)&&(B<=E)))
            cout<<"YES\n";
            else 
            cout<<"NO\n";
        }
        
    }
    }
	return 0;
}
