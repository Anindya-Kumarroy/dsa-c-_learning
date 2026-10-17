#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main()
{
    vector<int>nums={-1,0,1,2,-1,-4};

    vector<vector<int>>ans;
    set<vector<int>>s;
    int n=nums.size();

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(nums[i]+nums[j]+nums[k]==0)
                {
                    vector<int>trip={nums[i],nums[j],nums[k]};
                    sort(trip.begin(),trip.end());
                    
                    if(s.find(trip)==s.end())
                    {
                        s.insert(trip);
                        ans.push_back(trip);
                    }
                }
            }
        }
    }
     for(int i=0;i<ans.size();i++)
     {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
     }

}