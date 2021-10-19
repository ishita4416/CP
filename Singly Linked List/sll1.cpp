#include<bits/stdc++.h>

// linked list of integers

struct node{
int data;
node *next;// self referential structure
node(int x)// constructor 
{
data=x;
next=NULL;
}
};

int main()
{
//initializing 
node *head=new node(10);
node *temp1= new node(20);
node *temp2= new node(30);

//linking
head->next=temp1;
temp1->next=temp2;
return 0;
}

