#include <bits/stdc++.h>
using namespace std;
//0 sum subarray using hashing
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    //inserting all elements in the hash map
    unordered_set<int> um;
    int sum=0,flag=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        //if sumset is 0 or is already present
        if(sum == 0 || um.find(sum)!=um.end())
        flag=1;
        um.insert(sum);
        
    }
    if(flag==1)
    cout<<"Found";
    else
    cout<<"not found";
    return 0;
}
