#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int>&arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        int si=i;
        int j;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[si])
            {
                si=j;
            }
        }
        swap(arr[i],arr[si]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }

}
int main()
{
vector<int>arr={6,3,4,1,9};
int n=arr.size();
sort(arr,n);
return 0;
}