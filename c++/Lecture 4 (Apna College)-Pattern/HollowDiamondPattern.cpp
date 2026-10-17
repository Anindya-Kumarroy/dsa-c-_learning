#include<iostream>
using namespace std;
int main()
{
    int n,col,row;
    cout<<"Enter n:";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        
        for(col=1;col<=2*row-1;col++)
        {
            if(col==1||col==2*row-1)
            cout<<"*";
        }
        for(col=1;col<=2*n-row;col++)
        {
            cout<<" ";
        }
        cout<<endl;

    }
}