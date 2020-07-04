//merging two linked lists means to concat teo sorted LL
//into one sorted LL. We will need the following pointers:
//1. first and second to point at the starting of the two lists
//2. Third to point at the new sorted list, 
//3. Last to point at the last of the merged.

//procedure
/*1.check which list's first node's data is smaller.
2. make it third & last node.
3. look for the next value. make it the last node. adress it third->next.
4. after removing these nodes from the original lists, make the next element as first/second.
5. Follow this condition when first && second are null */

#include<iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *next ;

}*first = NULL, *second= NULL, *third = NULL;

void display(struct Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data <<" ";
        p=p->next;
    }
}
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
void create2(int arr[], int n)
{
    struct  Node *t, *last;
    second = new Node;
    second->data = arr[0];
    second -> next =NULL;

    for (int i=1;i<n; i++)
    {
        t= new Node;
        t->data = arr[i];
        t->next =NULL;
        last->next = t;
        last = t;
    }
}

void mergell(struct Node *p, struct Node *q)
{
    struct Node *last;
    if(p->data < q->data)
    {
        third = last= p;
        p=p->next;
        third->next =NULL;       
    }
    else
    {
        third =last= q;
        q=q->next;
        third ->next =NULL;
    }
    while(p && q)
    {
        if(p->data < q->data)
        {
            last->next=p;
            last =p;
            p=p->next;
            last->next = NULL;

        }
        else
        {
            last->next =q;
            last=q;
            q=q->next;
            last->next =NULL;
        }
    }
    if(p) last->next =p;
    if(q) last->next =q;
    
}

int main()
{
    int arr[] ={10,20,30,40};
    int arr1[] ={5,15,25,35};
    create(arr, 4);
    create2(arr1, 4);
    mergell(first, second);
    display(third);
    return 0;
}