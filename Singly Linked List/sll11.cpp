#include<bits/stdc++.h>

//find n-th node from the end of linked list using 2 pointer approach

struct node{
int data;
node *next;
node(int x)
{
data=x;
next=NULL;
}
};

node *nEnd(node *head, int n)
{
if(head==NULL) return NULL;
node *first=head;
for(int i=0;i<n;i++)
{
if(first==NULL) return NULL;
first= first->next;
}
node *second= head;
while(first != NULL)
{
second= second->next;
first= first->next;
}
std::cout<<(second->data);
}

int main()
{
node *head= new node(10);
head->next= new node(20);
head->next->next= new node(30);
head->next->next->next= new node(40);
nEnd(head, 2);
return 0;
}