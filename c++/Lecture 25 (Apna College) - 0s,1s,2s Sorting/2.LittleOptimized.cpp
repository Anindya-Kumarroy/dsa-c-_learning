#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>nums={0,0,2,1,2,0,1,2,1};
    int count0=0;
    int count1=0;
    int count2=0;
    int n=nums.size();
    int index=0;
    for(int i=0;i<n;i++)
    {
       if(nums[i]==0)
       {
        count0++;
       }
       else
       if(nums[i]==1)
       {
        count1++;
       }
       else
       {
         count2++;
       }
    }
    for(int i=0;i<count0;i++)
    {
       
           nums[index++]=0;

       
    }
    for(int i=0;i<count1;i++)
    {
        
            nums[index++]=1;
    }
    for(int i=0;i<count2;i++)
    {
       
            nums[index++]=2;
       
       
    }
    for(int i=0;i<n;i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
}