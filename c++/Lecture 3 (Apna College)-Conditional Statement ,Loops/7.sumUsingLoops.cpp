#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,i;
    cout<<"Enter n:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"Sum of "<<n<< " numbers = "<<sum;
    cout<<endl;
}