#include <bits/stdc++.h>
using namespace std;
// insert at end of circular linked list

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
    {
        temp->next=temp;
        return temp;
    }
    else
    {
        temp->next= head->next;
        head->next=temp;
        //swap data of head and inserted element
        int t= temp->data;
        temp->data= head->data;
        head->data= t;
        //change head to the newly inserted element
        return temp;
    }
}
node *printList(node *head)
{
    if(head==NULL) return NULL;
    node *p= head;
    do{
        cout<<(p->data)<<" ";
        p=p->next;
    }while(p!=head);
}
int main() {
    node *te;
    node *head= new node(10);
    head->next=new node(20);
    head->next->next= new node(30);
    head->next->next->next= new node(40);
    head->next->next->next->next= head;
	te=insertEnd(head,50);
	printList(te);
	return 0;
}
