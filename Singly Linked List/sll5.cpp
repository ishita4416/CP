#include<bits/stdc++.h>
// inserting at the end - O(1)
struct node{
int data;
node *next;
node(int x)
{
data=x;
next=NULL;
}
};

node *insertEnd(node *head, int x)
{
node *temp= new node(x);

if(head==NULL)
return temp;

node *curr=head;
while(curr->next!=NULL)
curr=curr->next;

curr->next=temp;
return head;

}

int main()
{
node *head= NULL;
head=insertEnd(head, 30);
head=insertEnd(head, 20);
head=insertEnd(head, 10);
return 0;
}