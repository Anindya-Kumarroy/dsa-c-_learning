#include<iostream>
using namespace std;
int main()
{
    int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int row=4;
    int col=4;
    int ps=0;
    int ss=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==j)
            {
            ps+=matrix[i][j];
            }
        }
    }
    for(int i=row-1;i>=0;i--)
    {
        for(int j=0;j<=col;j++)
        {
            if(i+j==row-1)
            {
            ss+=matrix[i][j];
            }
        }
    }
    int result=ps+ss;
    cout<<ps<<endl;
    cout<<ss<<endl;
    cout<<"Diagonal Sum="<<result<<endl;
}