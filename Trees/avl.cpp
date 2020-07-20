///AVL tress need balancing. they are binary search trees, with additional feature 
//that they re balaced. Every Node has a balance factor {-1,0,1} are acceptable.It is calc 
//by hL - hR.

#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* left, *right;
    int height;
}*root=NULL;

int nodeHeight(struct Node *p)
{
    int hl,hr; 
    hl =p && p->left? p->left->height:0;
    hr =p && p->right? p->right->height:0;

    return(max(hl,hr));
}
int nodeBalance(struct Node* p)
{
    int hl, hr;
    hl = p&& p->left?p->left->height:0;
    hr =p && p->right? p->right->height:0;

    return hl-hr;
}
Node* LLRot(struct Node * p)
{
    struct Node* pl = p->left;
    struct Node* plr= pl->right;
    pl->right = p;
    p->right = plr;

    p->height= nodeHeight(p);
    pl->height= nodeHeight(pl);
    if(p==root)
        root =pl;
    
    return pl;
}
Node* LRRot(struct Node * p)
{
    struct Node* pl= p->left;
    struct Node* plr= p->left->right;
    pl->right = plr->left;
    p->left = plr->right;

    plr->right = p;
    plr->left = pl;
    p->height= nodeHeight(p);
    pl->height = nodeHeight(pl);
    plr->height= nodeHeight(plr);

    if(p==root)
    {
        root = plr;
    }
    return plr;
}
Node* RLRot(struct Node * p)
{
    struct Node * pr= p->right;
    struct Node * prl= pr->left;

    pr->left =prl->right;
    p->right = prl->left;

    prl->left = p;
    prl->right = pr;

    p->height= nodeHeight(p);
    pr->height = nodeHeight(pr);
    prl->height= nodeHeight(prl);

    if(p==root)
    {
        root = prl;
    }
    return prl;
}
Node* RRRot(struct Node * p)
{
    struct Node * pr= p->right;
    struct Node * prl = p->right->left;

    pr->left = p;
    p->right = prl;

    p->height= nodeHeight(p);
    pr->height= nodeHeight(pr);
    if(p==root)
        root =pr;
    
    return pr;
}

Node* avlInsert(struct Node * p , int key)
{
    struct Node * t;
    if(p==NULL)
    {
        t= new Node;
        t->data = key;
        t->left = t->right =NULL;
        t->height = 0;
        return t;
    }
    if(key>p->data)
    {
        p->left= avlInsert(p->right, key);
    }
    else
    {
        p->right= avlInsert(p->left, key);
    }
    
    p->height= nodeHeight(p);
    if(nodeBalance(p)==2 && nodeBalance(p->left)==1)
        return LLRot(p);
    else if(nodeBalance(p)==2 && nodeBalance(p->left)==-1)
        return LRRot(p);
    else if(nodeBalance(p)==-2 && nodeBalance(p->right==1))
        return RLRot(p);
    else
        return RRRot(p);

    return p;
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
int main()
{
    struct Node *root = NULL;
	int y;
    cout<<"enter the root node data: ";
    cin>>y;
    cout<<"enter the next nodes:";
	root= avlInsert(root, y);
    int x,k;

    for(int i=1;i<6;i++) {
        cin>> x;
        avlInsert(root, x);
    } 
    return 0;
}