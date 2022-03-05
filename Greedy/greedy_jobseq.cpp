#include <bits/stdc++.h>
using namespace std;
//Job sequencing problem- greedy
struct Job{
    char id;
    int deadline;
    int profit;
};
bool comparison(Job a, Job b)
{
    return (a.profit > b.profit);
}
void jobsched(Job arr[], int n)
{
    sort(arr, arr+n, comparison);
    int res[n];
    bool slot[n];
    for(int i=0;i<n;i++)
    slot[i] = false;
    
    for(int i=0;i<n;i++)
    {
        for(int j=min(n,arr[i].deadline)-1;j>=0;j--)
        {
            if(slot[j] == false)
            {
                res[j] = i;
                slot[j] = true;
                break;
            }
        }
    }
    int profsum = 0;
    for(int i=0;i<n;i++)
    {
        if(slot[i])
        {
        cout<<arr[res[i]].id;
        profsum += arr[res[i]].profit;
        }
    }
    cout<<endl<<profsum;
}
int main() {
    int n;
    cin>>n;
	Job arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i].id>>arr[i].deadline>>arr[i].profit;
	}
	jobsched(arr,n);
	return 0;
}
