#include <iostream>
using namespace std;

void rec(int n, int k=1)
{
    if(n<1)
    return;
    cout<<k+1<<" ";
    rec(n-1,k+1);
    //cout<<n<<" ";
}
int main() {
	// your code goes here
	int n,k;
	cin>>n;
	rec(n,k);
	return 0;
}
