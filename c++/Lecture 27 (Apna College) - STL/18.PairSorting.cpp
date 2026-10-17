#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<pair<int,int>>vec={{1,2},{2,3},{7,8},{9,1},{6,3}};
    sort(vec.begin(),vec.end());

    for(auto p: vec)
    {
        cout<<p.first<<" "<<p.second<<" "<<endl;                  // remember this method of printing.
    }
    cout<<endl;
}