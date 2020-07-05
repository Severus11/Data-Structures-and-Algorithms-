 
#include<iostream>

using namespace std;

struct Node 
{
    int data;
    struct Node *next;

}*head,*last;

void create(int arr[], int n)
{
    struct Node *t, *last;
    head = new Node;
    head-> data = arr[0];
    head->next = head;
    last = head;
    for (int i=1; i<n ;i++)
    {
        t= new Node;
        t->data = arr[i];
        t->next =last->next;
        last ->next =t;
        last = t;
    }
}

void display(struct Node *p)
{
    static int flag =0;
    if(p!=head || flag==0)
    {
        flag =1;
        cout<<p->data<<" ";
        display(p->next);
    }
    flag =0;
}
int length(struct Node *p)
{
    int length =1;
    p=head->next;
    while(p!=head)
    {
        length++;
        p=p->next;
    }
    return length;    
}
void insert(struct Node *p, int index, int x)
{
    struct Node *t;
    if(index<0 || index>length(p))
    {
        return;
    }
    if(index==0)
    {
        t= new Node;
        t->data = x;
        if(head ==NULL)
        {
            head =t;
            head->next = head;
        }
        else{
            while(p->next !=head) p=p->next;
            p->next =t;
            t->next =head;
            head =t;
        }
    }
    else
    {
        for(int i=0; i<index-1; i++)
        {
            p=p->next;
        }
        t= new Node;
        t->data =x;
        t->next =p->next;           
        p->next =t;
        
    }
    
}

int del(struct Node *p, int index)
{
    int x;
    Node *q;
    if(index <0 || index >length(head))
    return -1;

    if(index ==1)
    {
        while(p->next !=head)
        {
            p=p->next;
        }
        x= p->data;
        if(p==head)
        {
            delete head;
            head =NULL;
        }
        else{
        p->next =head ->next;
        delete head;
        head =p->next;   
        }
    }
    else
    {
        p= head;
        for (int i=0; i<index-2; i++)
        {
            p=p->next;
        }
        q= p->next;
        p->next = q->next;
        delete q;      
    }
    cout<<"node has been deleted!";
    return 0;
}


int main()
{
    int arr[] = {1,2,3,4,5};
    create(arr, 5);
    cout<<endl;
    cout<< length(head);
    cout<<endl;
    display(head);
    cout<<endl;
    insert(head,4,29); //insert(head,5,69);
    cout<<endl;
    display(head);
    cout<<endl;
    del(head,2);
    cout<<endl;
    display(head);
    return 0;
}
