#include <bits/stdc++.h>
using namespace std;
// stringstream application
// counting number of words in a string using stringstream
int main() {
    string str;
    getline(cin, str);
    //breaking input into words using string stringstream
    stringstream s(str);
    string word;//stored individual words
    int count=0;
    while(s>>word) //acts like cin>> read from stringstream obj
    count++;
    cout<<count;
	return 0;
}
