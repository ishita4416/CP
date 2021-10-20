#include <bits/stdc++.h>
using namespace std;

//circular doubly linked list- insert at head and end

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
    node *temp=head;
    while(temp->next!=head)
    {
        std::cout<<(temp->data)<<" ";
        temp= temp->next;
    }
    cout<<(temp->data)<<" ";
}
node *insertHead(node *head, int x)
{
    node *temp= new node(x);
    if(head==NULL)
    {
        temp->next=temp;
        temp->prev=temp;
        return temp;
    }
    temp->prev=head->prev;
    temp->next=head;
    head->prev->next=temp;
    head->prev=temp;
    return temp;
}
node *insertEnd(node *head, int x)
{
    node *temp= new node(x);
    if(head==NULL)
    {
        temp->next=temp;
        temp->prev=temp;
        return temp;
    }
    temp->prev=head->prev;
    temp->next=head;
    head->prev->next=temp;
    head->prev=temp;
    return head;
}
int main() {
    node *head= new node(10);
    node *temp1= new node(20);
    node *temp2= new node(30);
    head->next=temp1;
    temp1->next=temp2;
    temp2->next=head;
    head->prev=temp2;
    temp2->prev=temp1;
    temp1->prev=head;
    head= insertHead(head,5);
    printList(head);
    cout<<endl;
    head= insertEnd(head,40);
    printList(head);
	return 0;
}
