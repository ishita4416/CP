#include <bits/stdc++.h>
using namespace std;
//given sum subarray using hashing
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int x;
    cin>>x;
    unordered_map<int, int> um;
    int c_sum=0,flag=0;
    for(int i=0;i<n;i++)
    {
        c_sum+=arr[i];
        if(x==c_sum)
        flag=1;
        if(um.find(c_sum-x)!=um.end())
        flag=1;
        um[c_sum]=i;
    }
    if(flag==1)
    cout<<"Found";
    else
    cout<<"not found";
    return 0;
}
