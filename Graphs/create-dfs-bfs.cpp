//graphs can be visualised as trees with interconnects
// graphs can be modelled as adjacency matrix or adjacency lists.
// BFS is like level order traversal and implemented using a queue
//BFS can be done on paper by making the graph as a level order tree
// DFS is like preorder traverssal. implemented using stack
//DFS can be done on paper 

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int arr[6][6];

void adjmat(int i, int j)
{
    arr[i][j]=1;
}
void print(int arr[][6])
{
    for(int i=0 ;i <6; i++)
    {
        for(int j=0; j<6 ;j ++)
        {
            cout<<arr[i][j];
        }
        cout<<endl; 
    }
}
void BFS(int arr[][6], int start, int n)
{
    queue<int>q1;
    int i= start; 
    int visited[n]={0};
    cout<<i<<" ";
    visited[i] =1;
    q1.push(i);
    
    while(!q1.empty())
    {
        i = q1.front();
        q1.pop();

        for(int j=0; j<n; j++)
        {
            if (arr[i][j]==1 && visited[j] ==0)
            {
                visited[j] =1;
                cout<<j<<" ";
                q1.push(j);
            }
        }
    }
}
void DFS(int arr[][6], int start, int n)
{
    static int visited[6]= {0};
    if(visited[start]==0)
    {
        cout<<start<<" ";
        visited[start]=1;
        for(int j =0; j<n; j ++)
        {
            if(visited[j]==0 && arr[start][j]==1)
            {
                DFS(arr, j,n);
            }
        }
    }
}
int main()
{
    int n, x,y;
    cout<<"Enter number of Nodes :";
    cin>>n;
    for(int i=0 ;i<6; i++)
    {
        for(int j=0; j<6; j++)
        {
            arr[i][j]=0;
        }
    }   
    while(x != 9 && y!=9)
    {
        cin>>x>>y;
        adjmat(x,y);
    }
    cout<<"Adjacency matrix is: "<<endl;
    print(arr);
    cout<<"\n"<<"Bredth - First search of the graph is: "<<endl;
    BFS(arr,0,6);
    cout<<"\n"<<"Depth- First Search of the graph is: "<<endl;
    DFS(arr,0,6);
    return 0;
}