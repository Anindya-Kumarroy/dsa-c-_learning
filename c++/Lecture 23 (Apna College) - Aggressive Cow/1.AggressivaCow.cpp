#include<iostream>
#include<vector>
using namespace std;
 bool ispossible(vector<int>&arr,int N,int c,int minAllowedDist)
 {
   int cow=1,lastStallPos=arr[0];
   for(int i=0;i<N;i++)
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
 int getdistance(vector<int>&arr,int N,int C)
 {
    sort(arr.begin(),arr.end());
    int st=1,end=arr[N-1]-arr[0],ans=-1;
    while(st<=end)
    {
        int mid=st+(end-st)/2;
        if(ispossible(arr,N,C,mid))
        {
            ans=mid;
            st=mid+1;
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
   vector<int>arr={1,2,8,4,9};
   int n=arr.size();
   int c=3;
   cout<<getdistance(arr,n,c)<<endl;
   return 0;

}