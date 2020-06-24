/* include bits.stdc++.h to use this.
It is declared as queue<type>name
it has the following attributes: empty(), size(), push(x), pop(), queue::front(), queue::back(), queue::swap(q1,q2) that swaps elements of two queues*/

#include<iostream>
#include<queue>
#include<bits/stdc++.h>
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
    queue<int>q1;
    q1.push(6);
    q1.push(8);
    q1.push(8);
    showQ(q1);
    cout<<endl;


    q1.pop();
    showQ(q1);

    return 0;

}