#include <bits/stdc++.h>
using namespace std;
// leaders in an array are all the elements which do not have a greater element
// on their right
int leader(int n, int arr[])
{
    // int temp[n];
    cout<<arr[n-1]<<" ";
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i-1]>arr[i])
        cout<<arr[i]<<" ";
        else 
        break;
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    leader(n,arr);
return 0;
}
