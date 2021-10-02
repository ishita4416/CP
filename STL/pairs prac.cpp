#include <bits/stdc++.h>
using namespace std;
//pair of first and last element and so on
void array_of_Pairs(int arr[],int N)
{
    pair<int,int> pa[N];
    int end=N-1;
    int j;
    while((j<N)&&(end>0))
    {
        pa[j].first=arr[j];
        pa[j].second=arr[end];
        j++;
        end--;
    }
    int it;
    if(N%2==0)
    it=N/2;
    else it=(N+1)/2;
    for(j=0;j<it;j++)
    cout<<"("<<pa[j].first<<","<<pa[j].second<<") ";
}
int main() {
    int T;
    cin>>T;
    for(int z=0;z<T;z++)
    {
        int N;
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
        }
        array_of_Pairs(arr,N);
        cout<<endl;
    }
	return 0;
}
