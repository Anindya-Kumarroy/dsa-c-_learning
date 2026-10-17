#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<char>vec={'a','b','c','d','e','f'};
    cout<<"Size="<<vec.size()<<endl;   //1.printing size
    vec.push_back(25);
    vec.push_back(25);                 //2.push back
    cout<<"After pushing back Size="<<vec.size()<<endl;
    vec.pop_back();                    //3.pop back
    cout<<"After poping back Size="<<vec.size()<<endl;
    for(char value : vec)
    {
        cout<<value<<endl;
    }
    
    for(int i: vec)
    {
        cout<<i<<endl;
    }
    
        return 0;
}