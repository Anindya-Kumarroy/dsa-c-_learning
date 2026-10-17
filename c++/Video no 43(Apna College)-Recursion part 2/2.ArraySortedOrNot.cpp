#include<iostream>
#include<vector>
using namespace std;

bool IsSorted(vector<int>arr,int n)
{
if(n==1 || n==0)                                    // If come upto 0th & 1st index, then will be sorted
{
    return true;
}
return arr[n-1]>=arr[n-2] && IsSorted(arr,n-1);      // Checking whether in ascending order or not.
}

int main()
{
vector<int>arr={3,5,6,7,10};
cout<<IsSorted(arr,arr.size())<<endl;                 // 0 if not sorted. 1 for sorted.
return 0;
}