#include <bits/stdc++.h>
using namespace std;
//array has 2 elements whose sum is equal to the given value
//(unsorted)using hashing
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int x;
    cin>>x;
    unordered_set<int> s;
    for(int i=0;i<n;i++)
    {
        int temp=x-arr[i];
        if(s.find(temp)!=s.end())
        cout<<"Found";
        s.insert(arr[i]);
    }
}
