//given 2 strings s1 and s2, find the minimum number of opertions
//to reach the second string. 3 types of operations are 
//insert, delete or modify, assuming each of it is of the same cost
//Bottom up approach is taken. If the last ltter is same, then copy the digonal element 
//else least of the adjacent elements:

#include<iostream>
using namespace std;

int Min(int a, int b, int c)
{
    return min(min(a,b), c);
}

int editDis(string s1, string s2, int m, int  n)
{
  if(m==0) return n;
  else if(n==0) return m;

  else if(s1[m-1]== s2[n-1])
  {
    return editDis(s1,s2,m-1,n-1); 
  }
  else
  {
    return 1+ Min(editDis(s1,s2,m-1,n-1), editDis(s1,s2,m,n-1),
    editDis(s1,s2,m-1,n));
  }
  
  
}
int main()
{
    string s1 = "cart";
    string s2 = "march";
    int m = s1.size();
    int n= s2.size();
    /*cout<<"enter initial string: "<<endl;
    cin>>s1;
    cout<<"enter final string: "<<endl;
    cin>>s2;*/
    cout<<"Minimum number of operations needed are: "<<editDis(s1,s2,4,5)<<endl;
    return 0;
}