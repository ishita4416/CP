#include <bits/stdc++.h>
using namespace std;
//std::count() usage- array
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int k;
    cin>>k;
    cout<<"The number of times "<<k<<" appears in the array is: "<<count(arr,arr+n,3);
	return 0;
}
