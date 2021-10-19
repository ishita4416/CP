#include<bits/stdc++.h>
// inserting at the beginning - O(1)
struct node{
int data;
node *next;
node(int x)
{
data=x;
next=NULL;
}
};

node *insertBegin(node *head, int x)
{
node *temp= new node(x);
temp->next= head;
return temp;
}

int main()
{
node *head= NULL;
head=insertBegin(head, 30);
head=insertBegin(head, 20);
head=insertBegin(head, 10);
return 0;
}