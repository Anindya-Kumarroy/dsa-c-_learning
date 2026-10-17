//Iterator
#include<iostream>
using namespace std;
int main()
{
    vector<int>num={1,2,3,4,5};
    // vector<int>::iterator it;                      // not required for auto
    for(auto it=num.begin();it!=num.end();it++)
    {
        cout<<"Vector:"<<*(it)<<endl;
    }
    for(auto it =num.rbegin();it!=num.rend();it++)
{
    {
        cout<<"Vector:"<<*(it)<<endl;
    }
}
}