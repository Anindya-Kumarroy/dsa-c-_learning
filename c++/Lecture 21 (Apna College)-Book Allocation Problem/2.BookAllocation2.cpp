#include<iostream>
#include<vector>
using namespace std;
bool isValid(vector<int>&arr,int n,int m,int MaxAllowedPages)
{
    int students=1;
    int pages=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>MaxAllowedPages)
        {
            return false;
        }
        if((pages+arr[i])<=MaxAllowedPages)
        {
            pages+=arr[i];
        }
        else
        {
            students++;
            pages=arr[i];
        }
    }
    if(students<=m)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int AllocateBooks(vector<int>&arr,int n,int m)
{
    if(m>n)
    {
        return -1;
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int max_val=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max_val)
        {
            max_val=arr[i];
        }

    }
int start=max_val;
int end=sum;
int ans=-1;
while(start<=end)
{
   int mid=start+(end-start)/2;
    if(isValid(arr,n,m,mid))
    {
        end=mid-1;
        ans=mid;
    }
    else
    {
        start=mid+1;

    }
   
}
 return ans;
}
int main()
{
    vector<int>arr={2,1,3,4,7,8,6,7,8,5,44,5};
    int n=arr.size();
    int m=2;
    int result=AllocateBooks(arr,n,m);
    cout<<"Minimum number of maximum pages = "<<result<<endl;
}