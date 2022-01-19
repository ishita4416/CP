#include <bits/stdc++.h>
using namespace std;
//list of smaller elements from an array

vector<int> getSmaller(int arr[],int n, int k)
{
    vector<int> res;
    for(int i=0;i<n;i++)
    if(arr[i]<k)
    res.push_back(arr[i]);
    return res;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int k;
    cin>>k;
    vector<int> res=getSmaller(arr,n,k);
    for(int x: res)
    cout<<x<<" ";
	return 0;
}
