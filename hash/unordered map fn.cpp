#include <bits/stdc++.h>
using namespace std;
// unordered map functions
int main() {
	unordered_map<string, double> umap;
	
	//inserting values using [] operator
	umap["pi"]=3.14;
	umap["root2"]=1.414;
	umap["root3"]=1.732;
	umap["log10"]=2.302;
	umap["loge"]=1.0;
	
	//inserting value by insert function
	umap.insert(make_pair("e",2.718));
	
	string key="lambda";
	
	//if key is not found in map, iterator to end is returned
	//else key is returned
	if(umap.find(key)==umap.end())
	cout<<"not found\n";
	else cout<<"found "<<key<<endl;
	
	//traversing 
	unordered_map<string, double>:: iterator itr;
	for(itr=umap.begin();itr!=umap.end();itr++)
	cout<<itr->first<<" "<<itr->second<<endl;
	return 0;
}
