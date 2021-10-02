#include <bits/stdc++.h>
using namespace std;
//2 arrays paired
void corresp_Pair(int arr1[],int arr2[],int N)
{
    pair<int,int> pa[N];
    for(int j=0;j<N;j++)
    {
        pa[j].first=arr1[j];
        pa[j].second=arr2[j];
    }
    for(int j=0;j<N;j++)
    cout<<"("<<pa[j].first<<","<<pa[j].second<<") ";
}
int main() {
    int T;
    cin>>T;
    for(int z=0;z<T;z++)
    {
        int N;
        cin>>N;
        int arr1[N],arr2[N];
        for(int i=0;i<N;i++)
        {
            cin>>arr1[i];
        }
        for(int i=0;i<N;i++)
        {
            cin>>arr2[i];
        }
        corresp_Pair(arr1,arr2,N);
        cout<<endl;
    }
	return 0;
}
