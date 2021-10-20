#include <bits/stdc++.h>
using namespace std;

//insert at beginning of Doubly linked list
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
node *printList(node *head)
{
    node *last;
    while(head !=NULL)
    {
        cout<<" "<<head->data;
        last=head;
        head=head->next;
    }
}
node *insertBegin(node *head, int x)
{
    node *temp= new node(x);
    temp->next=head;
    if(head!=NULL)
    head->prev=temp;
    return temp;
}
int main() {
    node *head= new node(10);
    node *temp1= new node(20);
    node *temp2= new node(30);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    node *t= insertBegin(head,5);
    printList(t);
	return 0;
}
