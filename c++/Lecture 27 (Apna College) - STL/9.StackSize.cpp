#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<"S size: "<<s.size()<<endl;
    stack<int>s2;
    s2.swap(s);
    cout<<"S size: "<<s.size()<<endl;              //After swapping it will be zero as all the elements are moved to s2.
    cout<<"S2 Size: "<<s2.size()<<endl;
}