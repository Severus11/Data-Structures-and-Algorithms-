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
int leaf(struct Node* root)
{
	int x=0;
	int y =0;
	if(root!=0)
	{
		x= leaf(root->left);
		y= leaf(root->right);

		if(root->left ==NULL && root->right==NULL)
		{
			return x+y+1;
		}
		else
		{
			return x+y;
		}		
	}
	return 0;
}

int main()
{
    int n, x;
	cout<<"enter number of nodes in the tree:";
	cin>>n;
	int arr[n];
	cout<<"enter the nodes of the tree from left to right(level order):";
	for(int i=0; i<n ; i++)
	{
		cin>>arr[i];
	}

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
    cout<<"\n";
	cout<<"\n"<<"number of leaf nodes of the tree are: "<<leaf(root)<<endl;
	return 0;
}




