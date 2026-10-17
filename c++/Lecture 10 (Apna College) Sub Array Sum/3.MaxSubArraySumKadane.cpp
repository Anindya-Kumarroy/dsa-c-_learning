#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,-5,9,-8};
    int size=sizeof(arr)/sizeof(int);
    int CurrSum=0;
    int MaxSum=INT_MIN;
    for(int i=0;i<size;i++)
    {
      CurrSum+=arr[i];
          MaxSum=max(CurrSum,MaxSum);
      if(CurrSum<0)
      {
        CurrSum=0;
      }
    }
    cout<<"Max Sub Array Sum = "<<MaxSum<<endl;
}