#include <bits/stdc++.h>
using namespace std;
//left-most repeating char in a str
int main() {
    string str;
    getline(cin,str);
    unordered_map<char,int> map;
    char c;
    int ind=INT_MAX;
    for(int i=0;i<str.size();i++)
    {
        char p=str[i];
        if(map.find(p)==map.end())
        map.insert({p,i});
        else if(map[p]<ind)
        {
            ind=map[p];
            c=p;
        }
    }
    cout<<"The first letter to repeat from left-most is "<<c;
    return 0;
}
