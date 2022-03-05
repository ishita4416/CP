#include<bits/stdc++.h>
using namespace std;

bool myCmp(pair<int,int>a, pair<int,int>b)
{
    return(a.second < b.second);
}
int maxAct(pair<int,int>arr[], int n)
{
    sort(arr,arr+n,myCmp);
    int prev = 0;
    int res = 1;
    for(int curr = 1; curr<n; curr++)
    {
        if(arr[curr].first >= arr[prev].second)
        {
            res++;
            prev = curr;
        }
    }
    return res;
}
int main() {
	int n;
	cin>>n;
	pair<int,int> arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i].first>>arr[i].second;
	}
	int ans = maxAct(arr,n);
	cout<<ans;
	return 0;
}
