#include <bits/stdc++.h>
using namespace std;
//given an array, count distinct elements
//unordered sets store only unique elements
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    unordered_set <int> s;
    int res=0;
    for(int i=0;i<n;i++)
    {
        if(s.find(arr[i])==s.end())
        {
            s.insert(arr[i]);
            res++;
        }
    }
    cout<<res;
	return 0;
}
