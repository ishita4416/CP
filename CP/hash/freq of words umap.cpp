#include <bits/stdc++.h>
using namespace std;
// unordered map: given a string, find frequency of each word
int main() {
    string str;
    getline(cin,str);
    unordered_map<string, int> f;
    stringstream s(str);
    string word;
    while(s>>word)
    f[word]++;
    
    unordered_map<string,int> :: iterator itr;
    for(itr= f.begin(); itr!=f.end();itr++)
    cout<<itr->first<<": "<<itr->second<<endl;
	return 0;
}
