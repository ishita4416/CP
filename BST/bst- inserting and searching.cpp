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
void print(node* root)
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
int main() {
    node* root = NULL;
    root=insert(root,50);
    insert(root,30);
    insert(root,20);
    insert(root,40);
    insert(root,70);
    insert(root,60);
    insert(root,80);
	int x;
	cin>>x;
	int val=search(root,x);
	if(val)
	cout<<"Element found\n";
	else cout<<"Element not found\n";
	print(root);
	return 0;
}
