#include <bits/stdc++.h>
using namespace std;
// check for power of 2
int main() {
    int x;
    cin>>x;
    if(x&&!(x&(x-1)))
    cout<<"power of 2";
    else cout<<"not a power of 2";
	return 0;
}
 