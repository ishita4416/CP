#include<bits/stdc++.h>

//insert at given position in singly linked list

struct node{
int data;
node *next;
node(int x)
{
data=x;
next=NULL;
}
};

node *insertPos(node *head, int pos, int data)
{
node *temp= new node(data);
if(pos==1)
{
temp->next=head;
return temp;
}
node *curr= head;
for(int i=1; i<=pos-2 &&  curr!=NULL; i++)
curr=curr->next;
if(curr==NULL)
return head;
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
node *head= new node(50);
head->next= new node(40);
head->next->next= new node(30);
head->next->next->next= new node(20);
insertPos(head, 3, 45);
printList(head);
return 0;
}