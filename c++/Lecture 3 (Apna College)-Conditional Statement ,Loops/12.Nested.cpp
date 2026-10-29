#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter n:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)   //this is nested loop
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}