#include<stdio.h>
int main()
{
  int arr[5];
  printf("Enter 5 numbers :\n");
  for(int i=0;i<5;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("Your entered:\n");
  for(int i=0;i<5;i++)
  {
    printf("%d\t",arr[i]);
  }
  return 0;
}