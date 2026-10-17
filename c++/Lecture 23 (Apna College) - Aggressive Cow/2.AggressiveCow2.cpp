#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool ispossible(vector<int>&arr,int n,int c,int minAllowedDist)
{
    int cow=1;
    int lastStallPos=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]-lastStallPos>=minAllowedDist)
        {
            cow++;
            lastStallPos=arr[i];
        }
        if(cow==c)
        {
            return true;
        }
    }
    return false;

}
int getDistance(vector<int>&arr,int n,int c)
{
    sort(arr.begin(),arr.end());
    int start=1;
    int end=arr[n-1]-arr[0];
    int ans=-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(ispossible(arr,n,c,mid))
        {
            ans=mid;
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return ans;
}
int main()
{
    vector<int>arr={5,6,3,2,9};
    int n=arr.size();
    int c=3;
    cout<<getDistance(arr,n,c)<<endl;
    return 0;
}