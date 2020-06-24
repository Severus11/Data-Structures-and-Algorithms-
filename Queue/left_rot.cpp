#include<bits/stdc++.h>
#include<iostream>
#include<queue>
using namespace std;

void showQ(queue<int>q)
{
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}

int main()
{
    queue<int>a;
    int n,d,y;

    cin>>n>>d;

    for (int i=0; i<n;i++)
    {
        cin>>y;
        a.push(y);
    }
    int temp;
    int count =0; 

    while(count<d)
    {
        temp= a.front();
        a.push(temp);
        a.pop();
        count++;
    }

    showQ(a);



    //cout<<6;


    return 0;
}
