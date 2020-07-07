#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

};

Node * newNode(int x)
{
    Node *p = new Node;
    p->left =p->right = NULL;
    p->data =x;
    return(p);

}
Node* ins(int arr[], Node* root, int i, int n) 
{ 
	
	if (i < n) 
	{ 
		Node* temp = newNode(arr[i]); 
		root = temp; 

		 
		root->left = ins(arr, root->left, 2 * i + 1, n); 
		root->right = ins(arr,root->right, 2 * i + 2, n); 
	} 
	return root; 
} 
 

void in_order(Node* root) 
{ 
	if (root != NULL) 
	{ 
		in_order(root->left); 
		cout << root->data <<" "; 
		in_order(root->right); 
	} 
} 
void pre_order(Node * root)
{
  if(root!=NULL)
    {
        cout<<root->data<<" ";
        pre_order(root->left);
        pre_order(root->right);

    }
}
void post_order(Node *root)
{
    if(root!=0)
    {
        post_order(root->left);
        post_order(root->right);
        cout<<root->data<<" ";
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node * root= ins(arr, root, 0, n);
    pre_order(root);
    cout<<"\n";
    post_order(root);
    cout<<"\n";
    in_order(root);
    cout<<"\n";

    return 0;
}




