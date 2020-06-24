#include<iostream>
using namespace std;

int playwm(int q, int n,int queries[], int arr[])
{
    for (int i=0; i<q; i++)
    {
        int sum =0;
        for(int j=0;j<n; j++)
        {
            arr[j]= arr[j] +queries[i];

        }
        for(int i=0; i<n; i++)
        {
            sum=sum+ abs(arr[i]);
        }
        cout<<sum<<endl;
    }
    return 0;

}
int main()
{
    int n;
    int q;
    cin>>n;
    int arr[n];
    int queries[q];

    
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];

    }
    cin>>q;
    for(int i=0; i<q; i++)
    {
        cin>>queries[i];
    }
    playwm(q,n, queries, arr);
    return 0;
}