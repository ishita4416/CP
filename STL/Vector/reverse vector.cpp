#include <bits/stdc++.h>
using namespace std;
//reverse vector

int main() {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	for(auto itr=v.end()-1;itr!=v.begin()-1;itr--)
	cout<<*itr<<" ";
	return 0;
}
