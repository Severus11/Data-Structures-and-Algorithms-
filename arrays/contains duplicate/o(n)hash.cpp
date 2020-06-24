//this is the solution working in o(n) time duration 
//this uses a c++ map to execute the program.
// the array's elements are keyss and the value is their latest position

#include<iostream>
#include<iterator>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<int, int>mp;
    vector<int>v;
    int x,n,k;
    cout<<"Enter the lenght of the array & minimum distance: "<<endl;
    cin>>n>>k;
    
    

    for(int i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
    }

    for(int i=0; i<n; i++)
    {
        if(mp.find(v[i])!= mp.end())
        {
            if(i-mp[v[i]]<=k)
            {
                cout<<"trueeee!!!"<<endl;
            }
            else
            {
                mp[v[i]]=i;
            }
            
        }
        else
        {
            mp[v[i]]=i; 
        }
         
    }

    return 0;
}