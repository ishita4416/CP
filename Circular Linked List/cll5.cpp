#include <bits/stdc++.h>
using namespace std;
// delete head of circular linked list

struct node{
    int data;
    node *next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};

void *deleteHead(node *head)
{
    if(head==NULL) return NULL;
    if(head->next==head)
    {
        delete head;
        return NULL;
    }
    head->data= head->next->data;
    node *temp=head->next;
    head->next= head->next->next;
    delete temp;
    return head;
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
	deleteHead(head);
	printList(head);
	return 0;
}
