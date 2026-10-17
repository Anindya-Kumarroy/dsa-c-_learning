#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec(5,8);
    for(int i : vec)   //For Each Loop
    {
        cout<<i<<endl;
    }
    return 0;
}