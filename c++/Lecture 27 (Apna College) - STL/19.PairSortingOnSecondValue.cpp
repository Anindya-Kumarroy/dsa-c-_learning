#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 bool comparator(pair<int,int>p1,pair<int,int>p2)                   //comparison here.
    {
        if(p1.second<p2.second)
        {
            return true;
        }
       if(p1.second>p2.second)
       {
        return false;
       }
       if(p1.first<p2.first)
       {
        return true;
       }
       else
       return false;
    }


int main()
{
    vector<pair<int,int>>vec={{1,2},{3,1},{2,3},{6,7},{1,5},{1,3},{2,1},{1,1}};
    sort(vec.begin(),vec.end(),comparator);

    for(auto val:vec)
    {
        cout<<val.first<<" "<<val.second<<endl;
    }
    return 0;
}