#include <bits/stdc++.h>
using namespace std;

int smallest(int x, int y, int z)
{
    int c = 0;
    while (x && y && z) {
        x--;
        y--;
        z--;
        c++;
    }
    return c;
}
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
            sm=smallest(A,B,C);
            int var=A+B+C-sm;
            if((sm>E)||(var>D))
            cout<<"NO\n";
            else
            cout<<"YES\n";
        }
        
    }
    }
	return 0;
}
