#include <bits/stdc++.h>
using namespace std;
// two pointer: pair with given sum in sorted array
int pairsum(int arr[],int n,int x)
{
    int left=0,right=n-1;
    while(left<right)
    {
        if(arr[left]+arr[right]==x)
        return 1;
        else if(arr[left]+arr[right]>x)
        right--;
        else 
        left++;
    }
    return 0;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int x;//sum to be found
    cin>>x;
    int val=pairsum(arr,n,x);
    if(val)
    cout<<"Yes, sum exists";
    else 
    cout<<"No, sum doesn't exist";
	return 0;
}
