#include <bits/stdc++.h>
using namespace std;
// template gfg prac
template<class T>
class minElement{
    private: 
    T y;
    public:
    minElement(T y){ this->y=y; }
    T check(T x)
    {
        (x>y)? (cout<<y): (cout<<x);
    }
};
int main() {
    int c;
    cin>>c;
    switch(c)
    {
        case 1: 
        {
        string a,b;
        cin>>a>>b;
        minElement<string> obj1(a);
        obj1.check(b);
        }
        break;
        case 2: 
        {
        int a,b;
        cin>>a>>b;
        minElement<int> obj2(a);
        obj2.check(b);
        }
        break;
        case 3:
        {
        char a,b;
        cin>>a>>b;
        minElement<char> obj3(a);
        obj3.check(b);
        }
        break;
    }
	return 0;
}
