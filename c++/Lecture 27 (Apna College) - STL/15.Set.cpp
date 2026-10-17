#include<iostream>
#include<set>
using namespace std;
int main()
{
set<int>s;
s.insert(6);                                              // Random note: Unordered set e sort kora thake na.
s.insert(8);
s.insert(1);
s.insert(6);
s.insert(5);
s.insert(4);
s.insert(3);
for(auto val: s)
{
    cout<<val<<" ";                                       // no duplicate & will be sorted automatically.
}
cout<<endl;
cout<<"Size of set:"<<s.size()<<endl;                     // size will be equal to the unique value.

cout<<"Lower Bound:"<<*(s.lower_bound(4))<<endl;          // If 4 exist then 4 if 4 doesn't then just bigger than 4

cout<<"Upper Bound:"<<*(s.upper_bound(4))<<endl;          // Just bigger than 4


}