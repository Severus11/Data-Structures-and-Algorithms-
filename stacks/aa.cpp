#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

int left, right, middle, len;
vector<int>A;

int binarySearch(int x)
{
    int left =1;
    int right = len;

    while (left<=right)
    {
        middle = (left +right)/2;
        {
            if (x== A[middle])
            {
                return middle;
            }
            else if (x<A[middle])
            {
                right= middle-1;
            }
            else {
                left= middle+1;
            }
        }
    }
    return -1;

}

int main()
{
    string n;
    while(cin>>n)
    {   
        A.push_back(stoi(n));
    }
    len=A.size();

    sort(A.begin(), A.end());
    

    int x;
    cout<<"enter the number to be searched: ";
    cin>>x;
    binarySearch(x);
    
    return 0;

}