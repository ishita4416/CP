#include <bits/stdc++.h>
using namespace std;
//Check whether K-th bit is set or not
int main() {
    int n,k;
    cin>>n>>k;
    if(n&(1<<(k-1)))
    cout<<"set";
    else cout<<"not set";
	return 0;
}
// e.g. n=7,k=4 111,1000=0 not set 