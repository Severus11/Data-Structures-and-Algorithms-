///in a given array, find that if a number k is repeated twice and the
//distance betweeen them two numbers is also k

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<int>v;
bool isDup(vector<int>v)
{
    int u,y;
    int n= v.size();
    for (int i=0; i<n; i++ )
    {
        for (int j=i+1; j<n;j++)
        {
            if ((v[i]== v[j]))
            {
                u= i;
                y =j;
                
            }
             
        }
    }
    if(abs(u-y)<=v[u])
    {
        cout<<"sdsds"<<endl;
        return true;
    }
}

int main()
{
    int n,x;
    cout<<"enter the lenght of the vector: ";
    cin>>n;
    for (int i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
    }

    isDup(v);

    return 0;
}