#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int wid;
	float bal;
	cin>> wid >> bal;
	if((wid>0)&&(wid<=2000)&&(bal>0)&&(bal<=2000)&&(wid+0.50<=bal)&&(wid%5==0))
	{
	    bal=bal-wid-0.5;
	    cout<<setprecision(2)<<fixed<<bal;
	}
	else
	    cout<<setprecision(2)<<fixed<<bal;
	return 0;
}
