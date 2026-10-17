#include<stdio.h>
int main()
{
    int i, n,a=0,b=1;
    printf("Enter n:");
    scanf("%d",&n);
    printf("%d\t%d\t",a,b);
    for(i=2;i<n;i++)
    {
     int fibo=a+b;
     printf("%d\t",fibo);
     a=b;
     b=fibo;
    }
    return 0;
}
