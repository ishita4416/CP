#include <bits/stdc++.h>
using namespace std;

//delete last node of Doubly linked list
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
node *deleteLast(node *head)
{
    if(head==NULL) return NULL;
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    node *curr= head;
    while(curr->next!=NULL)
    curr=curr->next;
    curr->prev->next=NULL;
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
    node *t= deleteLast(head);
    printList(t);
	return 0;
}
