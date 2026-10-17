#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<char>vec={'a','b','c','d','e','f'};
    cout<<"Size="<<vec.size()<<endl;   //printing size
    for(char value: vec)
    {
        cout<<value<<endl;
    }
    
        return 0;
}