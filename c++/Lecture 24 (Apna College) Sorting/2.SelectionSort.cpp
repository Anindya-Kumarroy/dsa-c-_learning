#include<iostream>
#include<vector>
using namespace std;
void selectionsort(vector<int>&arr,int n)
{
    for(int i=0;i<n;i++)
    {
        int smallestIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[smallestIndex])
            {
                smallestIndex=j;
            }
           
        }
         swap(arr[i],arr[smallestIndex]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
}
int main()
{
    vector<int>arr={4,3,5,7,1};
    int n=arr.size();
    selectionsort(arr,n);
}