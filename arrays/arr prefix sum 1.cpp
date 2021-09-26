#include <bits/stdc++.h>
using namespace std;

//equilibrium: a point such that the sum on its left is equal to sum on right
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int sum=0;
    for(int i=0;i<n;i++)
    sum=sum+arr[i];
    int lsum=0,flag=0;
    for(int i=0;i<n;i++)
    {
        if(lsum==sum-arr[i])
        flag=1;
        lsum=lsum+arr[i];
        sum=sum-arr[i];
    }
    if(flag==1)
    cout<<"equilibrium exists";
    else 
    cout<<"none";
	return 0;
}
