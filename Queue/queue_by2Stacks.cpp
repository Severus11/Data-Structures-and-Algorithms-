/* consideer stack s1, and s2. s2 is placed over s1;
top of s2 is the first element of the queue, here pop operation happens (dequeue)o(n)
top of s1 is the last element of thee queue, here push operation happens(enqueue)o(1)
enqueue(q, x):: pushes the element to the top of stack 1;
dequeue (q):: if stack 2 is empty, transfer all the values of stack 1 to stack 2

then pop the topmost element from s2 */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

stack<int> s1, s2;
struct Queue{
    

    void enQ(int x)
    {
        s1.push(x);
    }

    int deQ()
    {
        if(s2.empty())
        {
            s2.push(s1.top());
            s1.pop();

        }
        int x= s2.top();
        s2.pop();
        return x;
        
    }
};

int main(){
    Queue q;
    q.enQ(5);
    q.enQ(2);

    q.enQ(3);
    q.enQ(4);

    cout << q.deQ() << '\n'; 
    cout << q.deQ() << '\n'; 
    cout << q.deQ() << '\n'; 

    return 0;
}
