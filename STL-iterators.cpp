#include <bits/stdc++.h>
using namespace std;
//functions of iterators in STL- advanc(), next(), prev(),inserter()
int main() {

     vector<int> ar = { 1, 2, 3, 4, 5 };
      
    // Declaring iterator to a vector
    vector<int>::iterator ptr;
      
    // Displaying vector elements using begin() and end()
    cout << "The vector elements are : ";
    for (ptr = ar.begin(); ptr < ar.end(); ptr++)
        cout << *ptr << " ";
    
    ptr=ar.begin();
    // Using advance() to increment iterator position
    // points to 4
    advance(ptr, 3);
      
    // Displaying iterator position
    cout << "\nThe position of iterator after advancing is : ";
    cout << *ptr << " "; 
    
    vector<int>::iterator ftr;
    
    ptr = ar.begin();
    ftr = ar.end();
    
     // Using next() to return new iterator
    // points to 4
    auto it = next(ptr, 3);
      
    // Using prev() to return new iterator
    // points to 3
    auto it1 = prev(ftr, 3);
      
    // Displaying iterator position
    cout << "\nThe position of new iterator using next() is : ";
    cout << *it << " ";
    cout << endl;
      
    // Displaying iterator position
    cout << "The position of new iterator using prev()  is : ";
    cout << *it1 << " ";
    cout << endl;
    
    vector<int> ar1 = {10, 20, 30};
    ptr = ar.begin();
    // Using advance to set position
    advance(ptr, 3);
      
    // copying 1 vector elements in other using inserter()
    // inserts ar1 after 3rd position in ar
    copy(ar1.begin(), ar1.end(), inserter(ar,ptr));
      
    // Displaying new vector elements
    cout << "The new vector after inserting elements is : ";
    for (int &x : ar) 
        cout << x << " ";
	return 0;
}
