// Highest priority element will be at the top of the queue.

#include<iostream>
using namespace std;
int main()
{
    priority_queue<int>q;
    q.push(1);
    q.push(11);
    q.push(7);
    q.push(9);
    while(!q.empty())
    {
        cout<<q.top()<<endl;
        q.pop();
    }
    
}