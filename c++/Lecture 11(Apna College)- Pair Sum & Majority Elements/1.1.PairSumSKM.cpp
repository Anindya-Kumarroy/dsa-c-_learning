#include<iostream>
#include<vector>
using namespace std;
vector<int>pairsum(vector<int>nums,int target)
{
     vector<int>ans;
     int n=nums.size();
     for(int i=0;i<n;i++)
     {
       for(int j=i+1;j<n;j++)
       {
          if(target==nums[i]+nums[j])
          {
          ans.push_back(i);
          ans.push_back(j);
          return ans;
          }

       }
     }
     return ans;
}
int main()
{
    vector<int>nums={6,4,3,5,2};
    int target=11;
    vector<int>ans=pairsum(nums,target);
    cout<<ans[0]<<","<<ans[1]<<endl;
    return 0;
}