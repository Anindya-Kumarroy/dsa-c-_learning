#include<iostream>
using namespace std;
int main()
{
    vector<int>vec={1,2,3,4,5};
    reverse(vec.begin(),vec.end());
    for(int val: vec)
    {
        cout<<val<<" ";
    }
    cout<<endl;
}