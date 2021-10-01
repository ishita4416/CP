#include <bits/stdc++.h>
using namespace std;
// pair functions 
int main() {

    pair <int,char> Pair1;
    pair <string,int> Pair2( "hello",9);
    int a, b;
    cin>>a>>b;
    pair <int, int> Pair3(a,b);
    pair <string, char> Pair4;
    Pair1.first=6;
    Pair1.second='w';
    Pair4= make_pair("good", 'o');// redundant now
    
    cout<<Pair1.first<<" "<<Pair1.second<<endl;
    cout<<Pair2.first<<" "<<Pair2.second<<endl;
    cout<<Pair3.first<<" "<<Pair3.second<<endl;
    cout<<Pair4.first<<" "<<Pair4.second<<endl;
	return 0;
}
