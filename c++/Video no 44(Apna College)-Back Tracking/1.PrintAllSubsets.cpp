#include<iostream>
#include<vector>
using namespace std;

void PrintSubsets(vector<int>&nums,vector<int>&ans,int i)
{
    if(i==nums.size())
    {
        for(int val:ans)                             // here we don't need to print the whole array in one time. But in leetcode we have to. So there we have to make a Vector of Vector set.
        {
            cout<<val<<" ";
            
        }
        cout<<endl;
        return;
    }

    ans.push_back(nums[i]);
    PrintSubsets(nums,ans,i+1);
    ans.pop_back();
    PrintSubsets(nums,ans,i+1);

}

int main()
{
vector<int>nums={1,2,3};
vector<int>ans;
PrintSubsets(nums,ans,0);
return 0;

}