#include<iostream>
using namespace std;
int main()
{
    vector <int>vec={1,2,3,4,5};
    cout<<"Max element:"<<*(max_element(vec.begin(),vec.end()))<<endl;
}