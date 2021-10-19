#include<bits/stdc++.h>

//middle of a singly linked list- using 2 pointers: slow and fast
// slow moves one node, fast moves 2 nodes, when fast reaches end, slow points to middle

struct node{
int data;
node *next;
node(int x)
{
data=x;
next=NULL;
}
};

node *mid(node *head)
{
if(head==NULL) return NULL;
node *slow=head,*fast=head;
while(fast!=NULL && fast->next!=NULL)
{
slow=slow->next;
fast=fast->next->next;
}
std::cout<<(slow->data);
}

int main()
{
node *head= new node(10);
head->next= new node(20);
head->next->next= new node(30);
head->next->next->next= new node(40);
mid(head);
return 0;
}