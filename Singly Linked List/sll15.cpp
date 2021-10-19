#include<bits/stdc++.h>

// remove duplicates from a sorted list

struct node{
int data;
node *next;// self referential structure
node(int x)// constructor 
{
data=x;
next=NULL;
}
};

void printList(node *head)
{
node *curr=head;
while(curr!=NULL)
{
std::cout<<(curr->data)<<" ";
curr= curr->next;
}
}

void remDup(node *head)
{
node *curr= head;
while(curr!=NULL && curr->next!=NULL)
{
if(curr->data == curr->next->data)
{
node *temp=curr->next;
curr->next=curr->next->next;
delete(temp);
}
else curr=curr->next;
}
}
int main()
{
//initializing 
node *head=new node(10);
head->next= new node(20);
head->next->next= new node(20);
head->next->next->next= new node(30);
remDup(head);
printList(head);
return 0;
}