#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter n:";
    cin>>n;
    for(i=1;i<=n;i=i+2)
    {
        cout<<i<<" ";
        sum=sum+i;
    }
    cout<<endl;
    cout<<"Sum="<<sum;
    cout<<endl;
}