#include <bits/stdc++.h>
using namespace std;
//merge 2 sorted arrays
void merso(int n, int arr1[], int m, int arr2[],int arr3[])
{
    int i=0,j=0,k=0;
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        arr3[k++]=arr1[i++];
        else
        arr3[k++]=arr2[j++];
    }
    while(i<n)
    arr3[k++]=arr1[i++];
    while(j<m)
    arr3[k++]=arr2[j++];
}
int main() {
    int n;
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++)
    cin>>arr1[i];
    int m;
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++)
    cin>>arr2[i];
    int arr3[m+n];
    merso(n,arr1,m,arr2,arr3);
    for(int i=0;i<m+n;i++)
    cout<<arr3[i]<<" ";
	return 0;
}
