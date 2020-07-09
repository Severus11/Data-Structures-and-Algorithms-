
#include<iostream> 
using namespace std;
struct node 
{ 
	int key; 
	struct node *left, *right; 
}; 

struct node *newNode(int item) 
{ 
	struct node *temp = (struct node *)malloc(sizeof(struct node)); 
	temp->key = item; 
	temp->left = temp->right = NULL; 
	return temp; 
} 

void inorder(struct node *root) 
{ 
	if (root != NULL) 
	{ 
		inorder(root->left); 
		cout<<root->key<<" "; 
		inorder(root->right); 
	} 
}
struct node* insert(struct node* node, int key) 
{ 
	
	if (node == NULL) return newNode(key); 

	
	if (key < node->key) 
		node->left = insert(node->left, key); 
	else if (key > node->key) 
		node->right = insert(node->right, key); 

	return node; 
} 
node* searchN(node* root, int key)
{
    if(root==NULL || root->key ==key)
    {
        return root;
    }
    else if (key>root->key)
    {
        return searchN(root->right, key);
    }
    return searchN(root->left, key);
}
struct node * minValueNode(struct node* node) 
{ 
    struct node* current = node; 
    while (current && current->left != NULL) 
        current = current->left; 
  
    return current; 
} 
  
struct node* deleteNode(struct node* root, int key) 
{ 
    // base case 
    if (root == NULL) return root; 
    if (key < root->key) 
        root->left = deleteNode(root->left, key); 
    else if (key > root->key) 
        root->right = deleteNode(root->right, key); 
    else
    { 
        if (root->left == NULL) 
        { 
            struct node *temp = root->right; 
            free(root); 
            return temp; 
        } 
        else if (root->right == NULL) 
        { 
            struct node *temp = root->left; 
            free(root); 
            return temp; 
        } 
        struct node* temp = minValueNode(root->right); 
        root->key = temp->key; 
        root->right = deleteNode(root->right, temp->key); 
    } 
    return root; 
} 
 
int main() 
{ 
	
	struct node *root = NULL;
	int y;
    cout<<"enter the root node data: ";
    cin>>y;
    cout<<"enter the next nodes:";
	root= insert(root, y);
    int x,k;

    for(int i=1;i<6;i++) {
        cin>> x;
        insert(root, x);
    }    
    /*
    insert(root, 20); 
	insert(root, 40); 
	insert(root, 70); 
	insert(root, 60); 
	insert(root, 80);*/ 
    cout<<"the inodrder traversal of this bst is :";
	inorder(root);
    cout<<endl;
    cout<<"enter the key needed to be searched: " ;
    cin>>k;
    node* sNode= searchN(root, k);
    cout<<k<<" found at "<<sNode<<endl;
    root = deleteNode(root,60);
    inorder(root);

	return 0; 
} 
