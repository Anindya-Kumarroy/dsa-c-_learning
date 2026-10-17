#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>nums={3,2,1,-4,-1,-6,-2,1,1,0};
    sort(nums.begin(),nums.end());
    int n=nums.size();
    int target=0;
    vector<vector<int>>ans;
    for(int i=0;i<n;i++)
    {
        if(i>0 && nums[i]==nums[i-1]) continue;
        for(int j=i+1;j<n;)
        {
            int p=j+1;
            int q=n-1;
            while(p<q)
            {
                long long int sum=nums[i]+nums[j]+nums[p]+nums[q];
                if(sum>target)
                {
                    q--;
                }
                else if(sum<target)
                {
                    p++;
                }
                else
                {
                    ans.push_back({nums[i],nums[j],nums[p],nums[q]});
                    p++;
                    q--;
                    if(p<q && nums[p]==nums[p-1]) p++;
                    if(p<q && q+1<n && nums[q]==nums[q+1]) q--;
                }
            }
             j++;
        while(j<n && nums[j]==nums[j-1]) j++;
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