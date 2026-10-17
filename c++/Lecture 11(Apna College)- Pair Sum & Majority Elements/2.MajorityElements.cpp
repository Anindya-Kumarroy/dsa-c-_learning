#include<iostream>
#include<vector>
using namespace std;
int findMajority(vector<int>&nums)
{
    int n=nums.size();
    int count;
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=0;j<n;j++)
        {
            if(nums[i]==nums[j])
            {
                count++;
            }
        }
        if(count>n/2)
        {
            return nums[i];
        }
    }
    return -1;

}
int main()
{
  vector<int>nums={1,1,1,2,3};
  int result=findMajority(nums);
  if(result==-1)
  {
    cout<<"Majority not found."<<endl;
  }
  else
  cout<<"Majority element is:"<<result<<endl;
  
}