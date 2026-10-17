//Most Optimized.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
vector<int>nums={1,2,4,5,-3,2,-6};
sort(nums.begin(),nums.end());
vector<vector<int>>ans;
int n=nums.size();
for(int i=0;i<n;i++)
{
if(i>0 && nums[i]==nums[i-1]) continue;
int j=i+1, k=n-1;

while(j<k)
{
    int sum=nums[i]+nums[j]+nums[k];
    if(sum<0)
    {
        j++;
    }
    else if (sum>0)
    {
        k--;
    }
    else
    {
        ans.push_back({nums[i],nums[j],nums[k]});
        j++,k--;
        while(j<k && nums[j]==nums[j+1] ) j++;
        // while(j<k && nums[k]==nums[k-1]) k--;     showing wrong in leetcode.

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