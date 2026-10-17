#include<stdio.h>
int main()
{
    int n,i=1,sum=0;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum till %d = %d",n,sum);
    return 0;
}