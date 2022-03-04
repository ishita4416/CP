#include <bits/stdc++.h>
using namespace std;
//coins giving amount greedy
int main() {
	int n;
	cin>>n;
	int coins[n];
	for(int i=0;i<n;i++)
	cin>>coins[i];
	int amount;
	cin>>amount;
	sort(coins,coins+n,greater<int>());
	int res = 0;
	for(int i=0;i<n;i++)
	{
	    if(coins[i]<=amount)
	    {
	        int c = floor(amount/coins[i]);
	        res+=c;
	        amount-=c*coins[i];
	    }
	    if(!amount)
	    break;
	}
	cout<<res;
	return 0;
}
