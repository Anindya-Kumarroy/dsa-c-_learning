#include<stdio.h>
int main()
{
  int i,j,k,temp;
  int arr[5]={5,4,8,1,3};
  int n=sizeof(arr)/sizeof(arr[0]);
  for(i=0;i<n;i++)
  {
        for(j=0;j<n-i-1;j++)
        {
          if(arr[j]>arr[j+1])
          {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
          }
        }
  }
  for(k=0;k<n;k++)
  {
    printf("%d\t",arr[k]);
  }
  return 0;
}