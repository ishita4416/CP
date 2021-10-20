#include <bits/stdc++.h>
using namespace std;

//insert at end of Doubly linked list
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
node *insertEnd(node *head, int x)
{
    node *temp= new node(x);
    if(head==NULL)
    return temp;
    node *curr=head;
    while(curr->next!=NULL)
    curr=curr->next;
    curr->next=temp;
    temp->prev=curr;
    return head;
}
int main() {
    node *head= new node(10);
    node *temp1= new node(20);
    node *temp2= new node(30);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    node *t= insertEnd(head,40);
    printList(t);
	return 0;
}
