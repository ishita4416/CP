#include<bits/stdc++.h>

//sorted insertion in singly linked list

struct node{
int data;
node *next;
node(int x)
{
data=x;
next=NULL;
}
};

node *insertSort(node *head, int x)
{
node *temp= new node(x);
if(head==NULL)
return temp;
if(x < head->data)
{
temp->next=head;
return temp;
}
node *curr = head;
while(curr->next!=NULL && curr->next->data<x)
{
curr=curr->next;
}
temp->next=curr->next;
curr->next=temp;
return head;
}

void printList(node *head)
{
node *curr=head;
while(curr!=NULL)
{
std::cout<<(curr->data)<<" ";
curr= curr->next;
}
}

int main()
{
node *head= new node(10);
head->next= new node(20);
head->next->next= new node(30);
head->next->next->next= new node(50);
insertSort(head, 45);
printList(head);
return 0;
}