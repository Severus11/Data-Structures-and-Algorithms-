//recursive approach

#include<iostream>
using namespace std;

int binCoef(int n, int k)
{
    if(k==0 || k==n) return 1;

    return binCoef(n-1,k-1)+ binCoef(n-1,k);
}
int main()
{
    int n =4;
    int k=2;

    cout<<binCoef(4,2);
    return 0;
}