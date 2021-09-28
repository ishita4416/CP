#include <bits/stdc++.h>
using namespace std;
// counting occurences in a string
int main() {
    string str;
    getline(cin,str);
    char c;
    cin>>c;
    cout<<"The number of times "<<c<<" appears is: "<<count(str.begin(),str.end(),c);
	return 0;
}
