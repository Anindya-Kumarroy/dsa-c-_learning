#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>nums={5,4,7,5,3,2};
    int n=nums.size();
    int pivet=-1;
    for(int i=n-2;i>=0;i--)
    {
        if(nums[i]<nums[i+1])
        {
            pivet=i;
            break;
        }
    }
    if(pivet==-1)
    {
        sort(nums.begin(),nums.end());
        return 0;
    }
    for(int i=n-1;i>=0;i--)
    {
        if(nums[i]>nums[pivet])
        {
            swap(nums[i],nums[pivet]);
            break;
        }
    }
    int x=pivet+1;
    int y=n-1;
    while(x<y)
    {
        if(nums[x]>nums[y])
        {
            swap(nums[x],nums[y]);
        }
        x++;
        y--;
    }


    for(int e=0;e<n;e++)
    {
        cout<<nums[e]<<" ";
    }
    cout<<endl;
    

}