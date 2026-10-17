//Too hard to remember, revise twice & more.



#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>nums= {-1,0,1,2,-1,-4,-7,0,7,-8,1,7,3,6,-9};
    set<vector<int>>UniqueValue;                            // Here final answer values will be stored
    int n=nums.size();

    for(int i=0;i<n;i++)
    {
        int target=-nums[i];                                //target= -first value= -nums[i]
        set<int>s;                                           // Can't understand why it is required, may be for avoiding duplicate 
        for(int j=i+1;j<n;j++)
        {
            int third=target-nums[j];                        //nums[j]=second value , third=third value.
            if(s.find(third)!=s.end())
            {
                vector<int>trip={nums[i],nums[j],third};
                sort(trip.begin(),trip.end());                  // sorting for avoiding repeating value.
                UniqueValue.insert(trip);                      // Storing at UniqueValue

            }
            s.insert(nums[j]);                                 // Why ??
        }
        
    }

    vector<vector<int>>ans(UniqueValue.begin(),UniqueValue.end());        // putting on answer.
    

    for(int i=0;i<ans.size();i++)                                       // printing method.
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}