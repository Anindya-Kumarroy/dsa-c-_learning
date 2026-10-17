#include<iostream>
#include<list>
#include<vector>
using namespace std;
int main()
{
list<int>l;
l.push_back(1);
l.push_back(2);
l.push_back(3);
l.push_front(4);
l.push_front(5);
for(int x:l)
{
    cout<<x<<" ";
}
           //cout<<l[2]<<endl; not possible. 
cout<<endl;

// pop or deleing
l.pop_back();
l.pop_front();
for(int x:l)
{
    cout<<x<<" ";
}
cout<<endl;
}