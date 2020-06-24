/* A queue is a first in first out data structure. 
Assume an array, where elements can be added only at the rear end 
Only from the front end, elements can be removed.
it has the functionality: push pop empty and front
push adds an element at the rear of the queue
pop removes an element from the front of the queue
front returns the front most element of the queue. empty is bool to return if the queue is empty or not*/

#include<iostream>

using namespace std;
int front = 0;
int back = -1;
int x;

int queue[100];

void push(int x)
{
    ++back;
    queue[back]= x;

}
int top()
{   
    return queue[front];
}

void pop()
{   
    queue[front]=0;
    ++ front;

}
bool empty()
{
    if(front> back)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
void show(int queue[100])
{
    while(!empty())
    {
    cout<<top()<<" ";
    pop();
    }
}

int main()
{
    int y;
    while(y!=9)
    {   
        cin>>y;
        switch (y)
        {
        case 1:
            cout<<"enter value to insert in queue: "<<endl;
            cin>>x;
            push(x);
            //show(queue);
            break;
        case 2:
            cout<<"the front value from the queue has been removed !"<<endl;
            //show(queue);
            pop();

            break;
        case 3:
            cout<<"The front most value of the queue is :"<< top()<<endl;
        case 4:
            show(queue);
            break;
        default:
            
            break;
        }
    }
    
    return 0;
}

