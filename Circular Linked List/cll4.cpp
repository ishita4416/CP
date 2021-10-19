#include <bits/stdc++.h>
using namespace std;
// insert at begin of circular linked list

struct node{
    int data;
    node *next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};

void *insertBegin(node *head, int x)
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
        int t= head->data;
        head->data= temp->data;
        temp->data= t;
        return head;
    }
}
void printList(node *head)
{
    if(head==NULL) return;
    node *p= head;
    do{
        cout<<(p->data)<<" ";
        p=p->next;
    }while(p!=head);
}
int main() {
    node *head= new node(10);
    head->next=new node(5);
    head->next->next= new node(20);
    head->next->next->next= new node(25);
    head->next->next->next->next= head;
	insertBegin(head,15);
	printList(head);
	return 0;
}