#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>arr={0,3,8,9,5,2};
int i;
int n=arr.size();
for(int i=0;i<n;i++)
{
if(arr[i]>arr[i+1] && arr[i]>arr[i-1])
{
    cout<<"Peak index:"<<i<<endl;
}
}

return 0;
}