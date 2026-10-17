#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>nums1={1,2,3,0,0,0};
vector<int>nums2={3,5,6};
int m=3,n=3;
int i=m-1,j=n-1;
int index=(m+n)-1;
while(i>=0 && j>=0)
{
    if(nums1[i]>=nums2[j])
    {
      nums1[index]=nums1[i];
      i--;
    }
    else
    {
        nums1[index]=nums2[j];
        j--;
    }
    index--;
}
while(j>=0)
{
    nums1[index]=nums2[j];
    j--;
    index--;
}
cout<<"Merged array: ";
for(int i=0;i<(m+n);i++)
{
    cout<<nums1[i]<<" ";
}
cout<<endl;
}