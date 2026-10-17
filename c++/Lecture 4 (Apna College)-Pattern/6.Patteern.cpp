#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    int ch=64;
    cout<<"Enter n:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            
           char result=ch+i;
           cout<<result;
           
        }
        cout<<endl;
    }
}