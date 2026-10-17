#include<iostream>
#include<set>
using namespace std;
set<vector<int>>s;

void getAllCombinations(vector<int>&arr,int idx,int target,vector<vector<int>>&ans,vector<int>&combin)
{
  
    if(target==0)
    {
        if(s.find(combin)==s.end())
        {
            ans.push_back(combin);
            s.insert(combin);
            
        }
        return;
    }
    else if (target<0 || idx==arr.size())
    {
        return;
    }
   
    combin.push_back(arr[idx]);
    //single
    getAllCombinations(arr,idx+1,target-arr[idx],ans,combin);
    //multiple
    getAllCombinations(arr,idx,target-arr[idx],ans,combin);
    //exclude
    combin.pop_back();
    getAllCombinations(arr,idx+1,target,ans,combin);

}

int main()
{
    vector<int>arr={2,3,5};
    int target=8;
    vector<int>combin;
    vector<vector<int>>ans;
    getAllCombinations(arr,0,target,ans,combin);

    for(const auto& row:ans)
    {
        cout<<"   [ ";
        for(int val:row)
        {
            cout<<val<<" ";
            
        }
        cout<<"]";
        
    }
    cout<<endl;
}