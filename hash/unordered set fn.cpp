#include <bits/stdc++.h>
using namespace std;
//unordered set functions
int main() {
    //declaring set for string data type
    unordered_set <string> s;
    //inserting various strings, only one of repeating strings stored
    s.insert("Hello");
    s.insert("World");
    
    string key="Hi";
    
    //  find returns end iterator if key is not found,
    //  else it returns iterator to that key
    
    if(s.find(key)== s.end())
    cout<<"not found\n";
    else
    cout<<"found\n";
    
    //for printing all elements of the set
    
    unordered_set<string> :: iterator itr;
    for(itr= s.begin(); itr!=s.end();itr++)
    cout<<(*itr)<<endl;
	return 0;
}
