//longest common subsequence
//naive recursive algorithm
#include<bits/stdc++.h>

using namespace std;
vector<char>q;
int max(int a,int b)
{
    if(a>b) return a;
    return b;
    
}


int lcs(char* x, char* y, int m, int n)
{
    int i=1;
    if(m==0 ||n==0) return 0;
    else
    {
        if(x[m-1]= y[n-1])
        {
            
            return lcs(x,y, m-1, n-1) +1;
        }
        else
        {
            return max(lcs(x,y,m-1,n), lcs(x,y,m,n-1));
        }
    }
}
void disp(vector<char>q)
{
    for(int i=0; i<q.size();i++)
    {
        cout<<q[i]<<" ";
    }
}

int main()
{
    char s[] = "werty";
    char t[] = "qety";
    int m= strlen(s);
    int n = strlen(t);

    cout<<lcs(s,t,m,n)<<endl;
    //disp(q);
    return 0 ;
}