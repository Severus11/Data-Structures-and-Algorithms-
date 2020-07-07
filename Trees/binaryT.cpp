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
void level_order(Node* root, int i)
{
	if (root !=0)
	{
		cout<<root->data<<" ";
		level_order(root->left , 2*i+1);
		level_order(root->right , 2*i+2);
		i++;
	}
}

int number_of_node(struct Node *p)
{
	if(p!=0)
	{
		return number_of_node(p->left) + number_of_node(p->right) +1;
	}
	return 0;
}

int height(struct Node *root)
{
	int x,y;
	if(root==0)
	{
		return 0;
	}
	
	x= height(root->left);
	y= height(root->right);	

	if(x>y)
	{
		return x+1;
	}
	else
	{
		return y+1;
	}
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node * root= ins(arr, root, 0, n);
    cout<<"Pre-Order Traversal of the tree is:"<<endl;
	pre_order(root);
    cout<<"\n";
	cout<<"\n"<<"post-Order Traversal of the tree is:"<<endl;
    post_order(root);
    cout<<"\n";
	cout<<"\n"<<"in-Order Traversal of the tree is:"<<endl;
    in_order(root);
    cout<<"\n";
	cout<<"\n"<<"level-Order Traversal of the tree is:"<<endl;
	level_order(root, 0);
	cout<<"\n";
	cout<<"height and number of nodes of this tree are: "<<height(root)<<" "<<number_of_node(root);
    return 0;
}




