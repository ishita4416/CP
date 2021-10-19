#include<bits/stdc++.h>

// linked list of integers- recursive- O(n) + auxiliary space O(n)
//(iterative better- as no auxiliary space required)

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
if (head==NULL)
return;
std::cout<<(head->data)<<" ";
printList(head->next);
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


