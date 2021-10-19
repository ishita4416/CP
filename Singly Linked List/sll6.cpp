#include<bits/stdc++.h>
// deleting from the beginning - O(1)
struct node{
int data;
node *next;
node(int x)
{
data=x;
next=NULL;
}
};

node deleteHead(node *head)
{
if(head==NULL)
return NULL;
else
{
node *temp= head->next;
delete head;
return *temp;
}
}

int main()
{
node *head=new node(10);
node *temp1= new node(20);
node *temp2= new node(30);

//linking
head->next=temp1;
temp1->next=temp2;

*head=deleteHead(head);
return 0;
}