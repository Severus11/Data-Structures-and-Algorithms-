//top down approach. builds and calculates only so much that is needed.
//TIme and space complexity are o(n).
#include<iostream>
using namespace std;
#define NIL -1
#define maxx 100
int lookup[maxx];
void init()
{
    for(int i=0; i<maxx; i++)
    {
        lookup[i] = NIL;
    }
}
int fib(int n)
{
    if(lookup[n]== NIL)
    {
        if(n<=1) 
        {    
            lookup[n]= n;
        }
        else
        {    
            lookup[n]= fib(n-1)+ fib(n-2);
        }
    }   
    return lookup[n];
}
int main()
{
    int n;
    cout<<"enter the number: "; 
    cin>>n;
    cout<<fib(n);
    return 0;
}