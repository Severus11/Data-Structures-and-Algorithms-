#include<iostream>

using namespace std;

struct Node
{
    int data;
    struct Node * right, *left;
};

struct Node * newNode(int x)
{
    struct Node *p = new Node;
    p->left =p->right = NULL;
    p->data =x;
    return(p);

}
void level_order(struct Node* root,int i)
{
    if (root !=0)
    {
        cout<<root->data;
        level_order(root->left, 2*i+1);
        level_order(root->right, 2*i+2);
        i++;
    }
}

void inorder(struct Node* root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
struct Node* insert(struct Node* root, int x)
{
    if(root==NULL) 
        return newNode(x);

    if(x<root->data);
    {
        root->left= insert(root->left,x);
    }
    if (x>root->data)
    {
        root->right = insert(root->right,x);
    }
    return root;
}
int main()
{
    //int arr[]= {50,30,20,40,70,60,80};
    Node* root = NULL; 
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    inorder(root);
    return 0;
}