/* stacks using standard tempplate library STL can be coded in a shorter procedure. 
The attributes of the data structure remain the same -  top(). push(x), pop(x), isEmpty()
A stack is declared by stack<type>name 
a print stack function can be defined as: 
1. when stack not empty; 
2. print the top value
3. pop the top value
The following code is a basic implementation of stacks using STL*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void ShowStack(stack<int>s)
{
    while(! s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}

int main()
{
    stack<int >s;
    int x;
    //cin>>x;
    while(x!=9)
    {
        cin>>x;
    switch (x)
    {
    case 1:
        cout<<"What would you like to push in the stack ?"<<endl;
        int y;
        cin>>y;
        s.push(y);
        //cin>>x;
        break;
    case 2:
        cout<<"Value that has been popped from the stack iss "<<s.top()<<endl;
        
        s.pop();
        //cin>>x;
        /*if (y==s.top())
        {
            s.pop(y);
            cin>>x;
        }
        else{
            throw "Only topmost value can be popped:";

            cin>>x;
        }*/
        break;
        case 3:
        cout<<"The topmost value is: "<<s.top()<<endl;

    default:    
        ShowStack(s);

        break;
    }
    }
    return 0;

}
