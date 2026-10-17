#include<iostream>
using namespace std;
int main()
{
    int matrix[3][4];
    int row=3;
    int col=4;
    cout<<"Enter matrix element:";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>matrix[i][j];
        }
    }
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    int target;
    cout<<"Enter target:";
    cin>>target;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(target==matrix[i][j])
            {
                cout<<target<<" found at index "<<i<<" " <<j<<endl;
            }
        }
    }
}