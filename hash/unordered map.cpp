#include <bits/stdc++.h>
using namespace std;
// unordered map functions
int main() {
    //key will be string and mapped value will be int
	unordered_map<string, int> umap;
	umap["Hello"]=1;
	umap["World"]=2;
	
	//traversing and unordered map
	for(auto x : umap)
	cout<<x.first<<" "<<x.second<<endl;
	return 0;
}
