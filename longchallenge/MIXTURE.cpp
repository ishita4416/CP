#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    for(int z=0;z<T;z++)
    {
        int A,B;
        cin>>A>>B;
        if(A>0 && B>0)
        cout<<"Solution\n";
        if(A==0)
        cout<<"Liquid\n";
        if(B==0)
        cout<<"Solid\n";
    }
	return 0;
}
