#include <bits/stdc++.h>
using namespace std;
// circular linked list basic implementation
struct node{
    int data;
    node *next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};
int main() {
    node *head= new node(10);
    head->next=new node(5);
    head->next->next= new node(20);
    head->next->next->next= new node(15);
    head->next->next->next->next= head;
	return 0;
}
