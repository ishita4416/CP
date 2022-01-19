#include <bits/stdc++.h>
using namespace std;

//vector functions
int main() {
    // pop_back(), front(), back()
    vector<int> v{10,5,20,15};
    v.pop_back();//pops last element of the function
    v.front()=100; //changes first element to 100
    cout<<v.front()<<" ";
    cout<<v.back()<<" ";
    cout<<endl;
    
    //insert()
    auto it =v.insert(v.begin(),10); // 10 100 5 20
    v.insert(v.begin()+2, 200); // 10 100 200 5 20
    v.insert(v.begin(), 2, 300); //300 300 10 100 200 5 20
    vector<int> v2;
    v2.insert(v2.begin(), v.begin(), v.begin()+2); //v2 copies values from v.begin() till 2 positions
    for(int x: v)
    cout<<x<<" ";
    cout<<endl;
    for(int x: v2)
    cout<<x<<" ";
    cout<<endl;
    
    //erase()
    v.erase(v.begin()); //300 10 100 200 5 20
    for(int x: v)
    cout<<x<<" ";
    cout<<endl;
    v.erase(v.begin(),v.end()-1);// removes all but the last element
    for(int x: v)
    cout<<x<<" ";
    cout<<endl;
    
    //clear(), empty()
    v.clear(); // empties the entire vector array
    if(v.empty()== true)
    cout<<"empty";
    else cout<<"not empty";
    return 0;
}
