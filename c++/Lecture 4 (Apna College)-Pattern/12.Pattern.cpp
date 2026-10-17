#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter n:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n-i-1;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i+1;j++)
        {
            cout<<j;
        }
         for(j=i;j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
     }
    }