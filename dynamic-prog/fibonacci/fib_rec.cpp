//this is the general recursive approach. 
//Time complexity is o(n2) and space complexity is also o(n2)

#include<iostream>

using namespace std;

int fib(int n)
{
    if (n<=1) return n;

    return fib(n-1) + fib(n-2);
}

int main()
{
    int n;
    cout<<"enter the number: "; 
    cin>>n;
    cout<<fib(n);
    return 0;
}
