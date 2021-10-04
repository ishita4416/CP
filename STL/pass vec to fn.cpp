#include <bits/stdc++.h>
using namespace std;
// passing vectors to functions
void fun(vector<int> &v)
{
    v.push_back(10);
    v.push_back(20);
}
void out(const vector<int> &v)// const ensures the value doesnt change and efficiency
{
    for(int x: v)
    cout<<x<<" ";
}
int main() {
    vector<int> v {5,7,8};
    fun(v);
    out(v);
	return 0;
}
