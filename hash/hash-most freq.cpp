#include <bits/stdc++.h>
using namespace std;
//most frequent element in an array using hashing
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    //inserting all elements in the hash map
    unordered_map<int,int> um;
    for(int i=0;i<n;i++)
    um[arr[i]]++;
    
    //finding maximum frequency
    int max=0,res=-1;
    for(auto i : um)
    {
        if(max<i.second)
        {
            res = i.first;
            max = i.second;
        }
    }
	cout<<res;
}
