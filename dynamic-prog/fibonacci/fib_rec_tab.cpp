//bottom up technique
////tabulation technique

#include<iostream>
using namespace std;

int fib(int n)
{
    int f[n+1];
    f[0]=0; f[1]=1;
    for(int i=2; i<=n; i++)
    {
        f[i] = f[i-1]+ f[i-2];
    }
    return f[n];
}
int main()
{
    cout<<"enter number: ";
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}