#include<bits/stdc++.h>

// linked list of integers- using head and next

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

int main()
{
//initializing 
node *head=new node(10);
head->next= new node(20);
head->next->next= new node(30);
head->next->next->next= new node(40);
printList(head);
return 0;
}

