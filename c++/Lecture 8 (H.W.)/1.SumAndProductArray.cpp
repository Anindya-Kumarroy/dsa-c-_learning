#include<iostream>
using namespace std;
void calculate(int arr[],int size)
{
    int i;
    long long int sum=0;
    long long int product=1;
    for(i=0;i<size;i++)
    {
        sum+=arr[i];
        product*=arr[i];
    }
    cout<<"Sum="<<sum<<endl;
    cout<<"Product="<<product<<endl;
   
}
int main()
{
    int arr[]={1,2,3,4,5,12,13};
    int size=sizeof(arr)/sizeof(int);
    calculate(arr,size);
    return 0;
}