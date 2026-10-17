#include<iostream>
#include<climits>             //for INT_MIN
using namespace std;
int MaxRowSum(int matrix[][3],int row,int col)
{
    int result=INT_MIN;
    for(int i=0;i<row;i++)
    {
          int sumI=0;
          for(int j=0;j<col;j++)
          {
            sumI+=matrix[i][j];
          }
          result=max(result,sumI);
    }
    return result;
}
int main()
{
    int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int row=4;
    int col=3;
    cout<<MaxRowSum(matrix,row,col)<<endl;
    return 0;
}