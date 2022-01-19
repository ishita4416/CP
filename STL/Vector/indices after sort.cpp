#include <bits/stdc++.h>
using namespace std;
//keeping indices after sorting

void sorted(int arr[], int n)
{
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    v.push_back({arr[i],i});
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
    cout<<v[i].first<<" "<<v[i].second;
    cout<<endl;
    }
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sorted(arr,n);
	return 0;
}
