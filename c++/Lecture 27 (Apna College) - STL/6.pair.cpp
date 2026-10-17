#include<iostream>
using namespace std;
int main()
{
    pair<string,int>p={"Anindya",5};
    cout<<p.first<<endl;
    cout<<p.second<<endl;

    // pair of pair

    pair<string,pair<string,int>>a={"Anindya",{"Ayon",96}};
    cout<<a.first<<endl;
    cout<<a.second.first<<endl;
    cout<<a.second.second<<endl;
}