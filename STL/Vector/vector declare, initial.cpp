#include <bits/stdc++.h>
using namespace std;
//vector declaration, initialisation, traversal
int main() {
    
    vector<int> v;
    v.push_back(10);
    v.push_back(5);
    v.push_back(20);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
    
    vector<int> v2 {10,5,20};
    for(int i=0;i<v2.size();i++)
    cout<<v2[i]<<" ";
    cout<<endl;
    
    int k=3,x=10;
    vector<int> v3 (k,x);
    for(auto it=v3.begin();it!=v3.end();it++)
    cout<<(*it)<<" ";
    cout<<endl;
    
	int arr[]={10,5,20};
	int n=sizeof(arr)/sizeof(int);
	vector<int> v4(arr,arr+n);
    for(auto it=v4.rbegin();it!=v4.rend();it++)// reversal
    cout<<(*it)<<" ";
    cout<<endl;
    
    return 0;
}
