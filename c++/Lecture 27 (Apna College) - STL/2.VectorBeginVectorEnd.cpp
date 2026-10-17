#include<iostream>
using namespace std;
int main()
{
    vector<int>num={9,2,3,4,5};
    cout<<*(num.begin());
    cout<<endl<<*(num.end() )<<endl;      // it is the 5th index, which is valid.
    return 0;
}