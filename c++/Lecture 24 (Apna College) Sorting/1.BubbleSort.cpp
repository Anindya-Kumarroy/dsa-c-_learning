#include<iostream>
#include<vector>
using namespace std;
void Bubblesort(vector<int>&arr,int n)
{
    for(int i=0;i<n;i++)
{
    bool isswap=false;
    for(int j=0;j<n-i-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
        swap(arr[j],arr[j+1]);
        isswap=true;
        }
        if(!isswap)
{
    return;
}

    }
}

}
void print(vector<int>&arr,int n)
{
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<endl;
}
}
int main()
{
vector<int>arr={3,2,5,7,4};
int n=arr.size();
Bubblesort(arr,n);
print(arr,n);


}