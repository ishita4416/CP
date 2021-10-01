#include <bits/stdc++.h>
using namespace std;
// sort one array according to another
int main() {
    int n;
    cin>>n;
    int a[n];
    char b[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    cin>>b[i];
    pair <int, char> pa[n];
    for(int i=0;i<n;i++)
    {
    pa[i].first=a[i];
    pa[i].second=b[i];
    }
    sort(pa,pa+n);
    for(int i=0;i<n;i++)
    cout<<pa[i].second<<" ";
	return 0;
}
