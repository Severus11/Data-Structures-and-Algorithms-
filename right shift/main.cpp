#include <iostream>

using namespace std;
void rotatebyone(int arr1[],int n)
{
    int temp= arr1[0],i;
    for (i=0; i<n-1; i++)
        arr1[i]= arr1[i+1];
    arr1[i]= temp;
}
void Crotatebyone(char arr1[],int n)
{
    int temp= arr1[0],i;
    for (i=0; i<n-1; i++)
        arr1[i]= arr1[i+1];
    arr1[i]= temp;
}


int main()
{
    int w,m;
    cin>>m;               //m is the number of elements in the collection
    cin>>w;
    if(w==0)
    {
      int arr1[m];
      int n = sizeof(arr1)/sizeof(arr1[0]);
      for(int i=0; i<n;i++)
          cin>> arr1[i];

      int d;
      cin>>d;
      for (int j=0; j<d; j++)
          rotatebyone(arr1,n);
      for (int i=0; i<n;i++)
        cout<<arr1[i];

    }

    else if (w==1)
    {
      char arr1[m];
      int n = sizeof(arr1)/sizeof(arr1[0]);
      for(int i=0; i<n;i++)
          cin>> arr1[i];

      int d;
      cin>>d;
      for (int j=0; j<d; j++)
          Crotatebyone(arr1,n);
      for (int i=0; i<n;i++)
        cout<<arr1[i];

    }
    /*int temp= arr1[0],i;
    for (i=0; i<n-1;i++)
        arr1[i]=arr1[i+2];
    arr1[i]=temp;*/



    cout << "Hello world!" << endl;
    return 0;
}
