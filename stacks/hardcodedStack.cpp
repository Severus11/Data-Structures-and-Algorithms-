// think of stack as a pile of books, where the first book comes out of the pile at the last, if they are taken out book by book. 
//This is why it is called last in first out data structure.
//It has 4 attributes
//push() puts in a new book the value on the top of the stack of books.
// pop() removes a book from the top
// isEmpty() checks if the stack is empty or not
// top() returns the element on the top of the stack

//here we are looking at an array starting its index at 1.

#include<iostream>
#include<string>
using namespace std;

int stack[100], topEL;

void push(int x)
{ 
    ++topEL;
    stack[topEL]=x;
    
}
void pop (int x)
{
    stack[topEL]=0;
    topEL--;

}
bool isEmpty()
{
    if (topEL>=1)
    {
        return false;
    }
    else
    {
        return true;
    }
    
}
int top()
{

    return stack[topEL];
}
void  fun(void)
{
    cout<<"exiting";
}

int main()
{
    topEL=0;
    string s;
    int x;
    string pu= "push";
    string pi= "pop";
    string po = "end";
    while(true)
    {
        cin>>s>>x;
        if(s==pu)
        {
            push(x);
            //int len = sizeof(stack)/sizeof(stack[0]);
            for (int i=0; i<=topEL;i++)
            {
                cout<< stack[i]<<endl;
            }
            
            
        } 
        else if(s==pi)
        {
            int y= top();
            
            if (x==y)
            {
                pop(x);
                //int len = sizeof(stack)/sizeof(stack[0]);
            for (int i=0; i<=topEL;i++)
            {
                cout<< stack[i]<<endl;
            }
            } 
            else
            {
                throw("this isnt the element at top of the stack !!");
            }
            //cin>>s>>x;
        }
        else if(s==po)
        {
            cout<<top();
            atexit(fun);
            //int len = sizeof(stack)/sizeof(stack[0]);
            //for (int i=0; i<=topEL;i++)
            //{
            //    cout<< stack[i]<<endl;
            //}

            
            break;

        }
        //break;
        

        /*else if(s=="end")
        {
            for (int i=1; i<=topEL; i++)
            {
                cout<<stack[i]<<endl;
                break;


            }
        }*/
        //break;




    }
    cout<<"prog closed ";
    
    return 0;


}
