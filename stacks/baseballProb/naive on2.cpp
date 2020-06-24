///given a list of strings: each can be of 4 types: integer, C , D , + 
//integer is the score of that round of the game
//C cites that the last round was invalid and removes the last score
// D doubles the score of the last round and saves it in its location
// + adds the score of last two rounds
// finalyy present the total score of all the valid rounds

#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main()
{
    string input;
    cout<<"Enter scores of each round. Enter in * to indicate you are done"<<endl;
    //cin>>n;
    vector<string> v;
    int n= v.size();
    vector<bool>cancel(n-1, false);
    int u=n-1;

    
    while(input != "*")
        {
            cin>>input;
            v.push_back(input);
        }
    /*if(input == "*")
    {
        for(int i = 0 ; i<(v.size() -1);i++)
            cout<<v[i]<<" " ;
    }*/

    for(int i=0; i<n-1; i++)
    {
        if (v[i]== "c")
        {
            int j= i-1;
            while(j>=0)
            {
                if (!cancel[j])
                {
                    cancel[j]= true;
                }
                j--;
                
            }
            cancel[i]= true;
        }

        else if(v[i]== "d")
        {
            int j=i-1;
            while(j>=0)
            {
                if(!cancel[j])
                {
                    v[i]= to_string(2*stoi(v[j]));
                    break;
                }
                j--;
            }
        }

        else if (v[i]== "+")
        {
            int j=i-1;
            int count =0;
            int sum=0;

            while(j>=0)
            {
                if (count==2)break;
                if(!cancel[j])
                {
                    sum = sum + stoi(v[j]);
                    count= count +1;
                }
                
                --j;
                v[i]= to_string(sum);
            }
        }

        else
        {
            //do nothing, its a number;
        }
    }
    int sum=0;
    for(int i=0; i<n; i++)
    {
        if(!cancel[i])
        {
            cout<<v[i];
            //sum = sum + stoi(v[i]);
        }
    }   
    for(int i = 0 ; i<(v.size() -1);i++)
    {
        if(!cancel[i])
        {
            cout<<v[i]<<" " ;
        }
    }   
    //cout<<sum;
    return 0;
}
    