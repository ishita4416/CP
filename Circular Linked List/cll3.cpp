#include <bits/stdc++.h>
using namespace std;
// circular linked list traversal
struct node{
    int data;
    node *next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};

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
    head->next->next->next= new node(15);
    head->next->next->next->next= head;
	printList(head);
	return 0;
}
