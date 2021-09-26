#include <iostream>
using namespace std;
// Find maximum sum of a subarray of size k
int main() {
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    if(k>n)
    cout<<"invalid";
    else
    {
    int sum=0;
    for(int i=0;i<k;i++)
    sum+=arr[i];
    int rsum=sum;
    for(int i=k;i<n;i++)
    {
        rsum=rsum+(arr[i]-arr[i-k]);
        sum=max(sum,rsum);
    }
    cout<<sum;
    }
	return 0;
}
