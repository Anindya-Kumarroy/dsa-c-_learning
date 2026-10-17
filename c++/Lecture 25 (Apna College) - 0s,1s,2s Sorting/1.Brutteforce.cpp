#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr={0,0,2,1,2,1,0,2,1};
    sort(arr.begin(),arr.end());
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
      cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}