#include <bits/stdc++.h>
using namespace std;
int* rev(int arr[],int low,int high)
{
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
    return arr;
}
int main() {
    int n,d;
    cin>>n>>d;
    int arr[n];
    int* ptr;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    ptr= rev(arr,0,d-1);
    ptr=rev(arr,d,n-1);
    ptr= rev(arr,0,n-1);
    for(int i=0;i<n;i++)
    cout<<ptr[i]<<" ";
	return 0;
}
