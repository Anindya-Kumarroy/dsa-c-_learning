#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<char>vec={'a','b','c','d','e','f'};
    vec.pop_back();                 //Deleting Last Value
    cout<<vec.front()<<endl;        //Printing Front Value
    cout<<vec.back()<<endl;         //Printing Back Value
    cout<<vec.at(3)<<endl;          //Printing value at any position
    return 0;
}