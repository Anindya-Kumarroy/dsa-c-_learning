#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>nums={1,2,3,4};
    vector<int>ans;
    for(int i=0;i<nums.size();i++)
    {
        int product =1;
        for(int j=0;j<nums.size();j++)
        {
            if(i!=j)
            {
                product*=nums[j];

            }
        }
        ans.push_back(product);
        cout<<"Product for index "<<i<<": "<<product<<endl;
    }
    return 0;
}