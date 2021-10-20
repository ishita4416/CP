#include <bits/stdc++.h>
using namespace std;

//doubly linked list implementation
struct node{
    int data;
    node *prev;
    node *next;
    node(int d){
        data=d;
        prev=NULL;
        next=NULL;
    }
};
void printList(node *head)
{
    node *last;
    while(head !=NULL)
    {
        cout<<" "<<head->data;
        last=head;
        head=head->next;
    }
}
int main() {
    node *head= new node(10);
    node *temp1= new node(20);
    node *temp2= new node(30);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    printList(head);
	return 0;
}
