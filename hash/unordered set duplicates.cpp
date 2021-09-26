#include <bits/stdc++.h>
using namespace std;
//unordered set duplicates
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    unordered_set<int> set1;
    unordered_set<int> dup;
    for(int i=0;i<n;i++)
    {
        //insert element if its not there
        if(set1.find(arr[i])==set1.end())
        set1.insert(arr[i]);
        //if element already there, insert into duplicate set
        else
        dup.insert(arr[i]);
    }
    unordered_set<int> :: iterator itr;
    for(itr=dup.begin();itr!=dup.end();itr++)
    cout<<*itr<<" ";
	return 0;
}
