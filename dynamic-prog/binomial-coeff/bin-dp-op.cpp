//this is the space optimized version of dp- binomial prob
//time complexity is same = o(n*k) but it uses only one D array
// it occupies space o(k)

#include<iostream>
using namespace std;

int Min(int a, int b)
{
    if (a>b) return b;
    return a;
}
int binCoeff(int n, int k)
{
    int c[k+1];
    for(int i=0; i<=k; i++)
    {
        c[i]=0;
    }
    c[0]= 1;
    for(int i=0; i<=n; i++)
    {
        for(int j= Min(i,k);  j> 0 ; j--)
        {
            c[j] = c[j] + c[j-1];
        }
    }
    return c[k];
}
int main()
{
    int n= 4;
    int k= 2;

    cout<<binCoeff(4,2)<<endl;
    return 0;
}