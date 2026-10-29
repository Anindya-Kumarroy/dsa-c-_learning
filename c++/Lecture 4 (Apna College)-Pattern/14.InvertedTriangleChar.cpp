#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter n:";
    cin>>n;
    int ch=64;
    for(i=1;i<=n;i++)
    {
        
        ch++;
        for(j=0;j<=i;j++)
        {
            cout<<" ";
        }
        for(j=0;j<=n-i;j++)
        {
            char result=ch;
            cout<<result;
            
        }
        cout<<endl;
    }
}