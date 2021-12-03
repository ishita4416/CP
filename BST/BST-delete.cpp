#include <iostream>
using namespace std;
struct node{
    int key;
    node *left, *right;
    node(int x)
    {
        key=x;
        left=NULL;
        right=NULL;
    }
};
node* insert(node *root, int key)// iterative insert is better as it doesnt require extra space or recursive overheads
{
    node* newnode= new node(key);
    node* x= root;
    node* y= NULL;
    while(x!=NULL)
    {
        y=x;
        if(key< x->key)
        x=x->left;
        else
        x=x->right;
    }
    if(y==NULL)
    y= newnode;
    else if(key<y->key)
    y->left= newnode;
    else y->right= newnode;
    return y;
}

int search( node *root, int x)
{
    if(root==NULL)
    return 0;
    else if(root->key==x)
    return 1;
    else if(root->key>x)
    return search(root->left,x);
    else
    return search(root->right,x);
}

node* getsuc(node *curr)
{
    curr=curr->right;
    while(curr!=NULL && curr->left!=NULL)
    curr=curr->left;
    return curr;
}
node* deletenode(node *root, int x)
{
    if(root==NULL) return root;
    if(root->key>x)
    root->left= deletenode(root->left,x);
    else if(root->key<x)
    root->right=deletenode(root->right,x);
    else{
        if(root->left==NULL)
        {
            node *temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right == NULL)
        {
            node* temp= root->left;
            delete root;
            return temp;
        }
        else{
        node *succ=getsuc(root);
        root->key= succ->key;
        root->right=deletenode(root->right, succ->key);
        }
    }
    return root;
}
void print(node* root)//inorder
{
    if(root==NULL)
    return;
    else
    {
        print(root->left);
        cout<<root->key<<" ";
        print(root->right);
    }
}

int main() {
    node* root = NULL;
    root=insert(root,50);
    insert(root,30);
    insert(root,20);
    insert(root,40);
    insert(root,70);
    insert(root,60);
    insert(root,80);
	deletenode(root,80);
	deletenode(root,20);
	deletenode(root,40);
	print(root);
	return 0;
}