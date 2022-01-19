#include <bits/stdc++.h>
using namespace std;
//sum of vector elements
int main() {
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	int sum=0;
	for(int i=0;i<v.size();i++)
	sum+=v[i];
	cout<<sum;
	return 0;
}
