//Maximum Subarray Printing

#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main()
{
    int arr[]={-4,3,5,-6,2};
    int size=sizeof(arr)/sizeof(int);
    int MaxSum=INT_MIN;
    for(int st=0;st<size;st++)
    {
        int CurrSum=0;
        for(int end=st;end<size;end++)
        {
            CurrSum+=arr[end];
          MaxSum=max(MaxSum,CurrSum);
        }
    }
    cout<<"Maximum Sub Array Sum = "<<MaxSum<<endl;
}