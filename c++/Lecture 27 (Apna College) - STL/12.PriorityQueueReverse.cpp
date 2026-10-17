//Lowest priority element will be at the top of the queue.

#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<int>>q;
    q.push(1);
    q.push(9);
    q.push(4);
    q.push(33);
    while(!q.empty())
    {
        cout<<q.top()<<endl;
        q.pop();
    }
    

}