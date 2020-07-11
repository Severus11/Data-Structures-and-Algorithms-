//recursive approach to egg drop problem

#include<bits/stdc++.h>
using namespace std;

int max(int a, int b)
{
    if (a>b) return a;
    return b;
}

int eggdrop(int e, int k)
{
    if(e==1) return k;
    if(k==1 || k==0) return k;
    int res;
    int min= INT_MAX;
    
    for(int i=1; i<=k; i++)
    {
        res = max(eggdrop(e-1, i-1), eggdrop(e, k-i));
        if(res<min)
        {
            min= res;
        }
    } 
    return min+1;
}
int main()
{
    int nFloors = 10;
    int nEggs =2;

    cout<<eggdrop(nEggs, nFloors);
    return 0;
    
}