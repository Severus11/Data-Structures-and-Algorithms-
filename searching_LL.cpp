/* Linked list cannot use binary search for searching elements because reaching the centre of a list in linear time can not be done.
Linear search is used hence. How to improve linear search in a LL:
1. transposition        2. Moving the found element to the head
after the usual travsering, the required element is brought to the first position.
a tail pointer is defiend to do so.
1. find the element
2. assign the tail pointer q->next  as the location of the next nodeeeee.
3. MAKE P->NEXT = FIRST
4. ASSIGN pointer p to node as first
5. Retrun adress of pointer p
6. else, q=p;  and return NULL;
*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
    
}*first =NULL;

void create(int arr[], int n)
{
    int i;
    struct Node *t, *last;
    first = new Node;
    first -> data= arr[0];
    first ->next = NULL;
    last = first;

    for (i=1; i<n ; i++)
    {
        t= new Node;
        t-> data= arr[i];
        t->next= NULL;
        last->next = t;
        last= t;

    }

}

Node *search(struct Node *p, int key)
{
    if(p==NULL)
    {
        return 0;
    }
    if(key==p->data)
    {
        return p;
    }
    return search(p->next, key);
}

Node *posHead(struct Node *p, int key)
{
    Node *q= NULL;
    while(p!=0)
    {
        if(p->data ==key)
        {
            q->next= p->next;
            p->next= first;
            first=p;
            return p;
        }
        q=p;
        p=p->next;
    }
    return NULL;
}
void disp(struct Node *p)
{
    while(p!=0)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main()
{
    int y;
    int arr[]= {1, 12 ,22, 21 , 34, 66 , 78 ,11, 13 , 27};
    cout<<"enter the number to be searched: ";
    cin>>y;

    create(arr, 10);
    cout<<search(first, y);
    posHead(first, y);
    disp(first);

    return 0;
}