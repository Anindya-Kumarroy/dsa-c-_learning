//Brute Force Approach


#include<iostream>
#include<set>
#include<vector>
#include<algorithm>                    // for using sort.
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
                sort(trip.begin(),trip.end());                           // for avoiding duplicate

                if(s.find(trip)==s.end())
                {
                    s.insert(trip);                                     // will be stored in s
                    ans.push_back(trip);                                // will be stored in ans
                }

            }
        }
    }
}

       // different printing process for 2d array.
for(int i=0;i<ans.size();i++)                                           // it will print 2 times
{
    for(int j=0;j<ans[i].size();j++)                                    // it should print 3 values. because there are 2 rows but 3 columns
    {
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}


}