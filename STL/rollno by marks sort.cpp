#include <bits/stdc++.h>
using namespace std;
//sort roll number by marks in descending order

void sorted(int roll[],int marks[], int n)
{
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    v.push_back({marks[i],roll[i]});
    sort(v.begin(),v.end(),greater<pair<int,int>>());
    for(int i=0;i<n;i++)
    {
    cout<<v[i].second<<" "<<v[i].first;
    cout<<endl;
    }
}
int main() {
    int n;
    cin>>n;
    int roll[n], marks[n];
    for(int i=0;i<n;i++)
    cin>>roll[i];
    for(int i=0;i<n;i++)
    cin>>marks[i];
    sorted(roll,marks,n);
	return 0;
}
