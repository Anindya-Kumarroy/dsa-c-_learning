#include<stdio.h>
int main()
{
    int arr[100],i,n;
    printf("How many numbers do u want:");
    scanf("%d",&n);
    printf("Enter %d numbers:",n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }

    int max,min;
    max=min=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    printf("Max=%d\n",max);
    for(i=0;i<n;i++)
    {
        if(arr[i]<min)
        min=arr[i];
    }
    printf("Min=%d",min);
    return 0;

}