// Most optimized
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>nums={2,0,2,0,1,0,1,2,1,1,2,0,0,2,0,1};
    int n=nums.size();
    int high=n-1;
    int low=0;
    int mid=0;
    while(mid<=high)
    {
        for(int i=0;i<n;i++)
        {
            if(nums[mid]==0)
            {
                swap(nums[low],nums[mid]);
                mid++;
                low++;
            }
           else if(nums[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(nums[high],nums[mid]);
                high--;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}