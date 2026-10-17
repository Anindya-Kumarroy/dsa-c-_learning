#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter n:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=3;j++)   //this is nested loop
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}