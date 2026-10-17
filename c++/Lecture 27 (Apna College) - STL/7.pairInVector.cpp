#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<pair<int,int>>vec={{1,2},{3,4},{5,6}};
    vec.push_back({4,5});              //insert
    vec.emplace_back(6,7);            // in-place object create.. adds at last index, but better than push_back as it is faster than push_back as it does not create temporary object.
    for(pair<int,int>x: vec)         // or for(auto x : vec)..
    {
        cout<<x.first<<" "<<x.second<<" "<<endl;
    }
}