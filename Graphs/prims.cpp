//a spanning tree is a graph with all the vertices and e-1 edges. It has no cycles.
//Prim's algorithm makes minimum spanning trees of the least cost
//start with taking the least cost edge. Now choose the next edge from the vertex 
//with the least cost. Repeat this step

#include<bits/stdc++.h>
using namespace std;
int arr[7][7];

void cost_adj_mat(int i, int j, int c)
{
    arr[i][j]= c;
    arr[j][i]= c;
}
void print(int arr[][7])
{
    for(int i=0 ;i <7; i++)
    {
        for(int j=0; j<7 ;j ++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl; 
    }
}

int main()
{
    int x,y, c,n;
    cout<<"Enter number of nodes: "<<endl;
    cin>>n;
    cout<<"Enter the edges, followed by their cost"<<endl;

    while(x!=9 && y!=9 && c!=9)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>x>>y>>c;
                cost_adj_mat(x,y,c);
            }
        }
    }    
    print(arr);
    return 0;
}