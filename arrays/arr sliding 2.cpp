#include <iostream>
using namespace std;
// Find subarray with given sum
int main() {
    int n,sum;
    cin>>n>>sum;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int rsum=arr[0],s=0,i;
    for(i=1;i<=n;i++)
    {
        while(rsum>sum && s<i-1)
        {
            rsum=rsum-arr[s];
            s++;
        }
        if(rsum==sum)
        {
            cout<<"between "<<s<<" and "<<i-1;
        }
        if(i<n)
        rsum=rsum+arr[i];
    }
	return 0;
}
