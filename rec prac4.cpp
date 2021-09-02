#include <iostream>
using namespace std;

int rec(int n)
{
    if(n<10)
    return n;
    return rec(n/10)+n%10;
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	cout<<rec(n);
	return 0;
}
