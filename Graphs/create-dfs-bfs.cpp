//graphs can be visualised as trees with interconnects
// graphs can be modelled as adjacency matrix or adjacency lists.
// BFS is like level order traversal and implemented using a queue
// DFS is like preorder traverssal. implemented using stack
#include<iostream>
#include<bits/stdc++.h>



using namespace std;
int arr[5][5];

void adjmat(int i, int j)
{
    arr[i][j] =1;
}
void print(int arr[][5])
{
    for(int i=0 ;i <5; i++)
    {
        for(int j=0; j<5 ;j ++)
        {
            cout<<arr[i][j];
        }
        cout<<endl; 
    }
}
void BFS(int arr[][4], int start, int n)
{
    queue<int>q1;
    int i= start; 
    int visited[n]={0};
    cout<<i<<" ";
    visited[i] =1;
    q1.push(i);
    
    while(!q1.empty())
    {
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
void DFS(int arr[][5], int start, int n)
{
    static int visited[5]= {0};
    if(visited[start]==0)
    {
        cout<<start<<" ";
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
    while(x != 9 && y!=9)
    {
        cin>>x>>y;
        adjmat(x,y);
    }
    cout<<"Adjacency matrix is: "<<endl;
    print(arr);
    cout<<"\n"<<"Bredth - First search of the graph is: "<<endl;
    BFS(arr,0,5);
    cout<<"\n"<<"Depth- First Search of the graph is: "<<endl;
    DFS(arr,0,5);
    return 0;
}