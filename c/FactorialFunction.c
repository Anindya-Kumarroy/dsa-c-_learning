#include<stdio.h>
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
    fact=fact*i;
    }
    return fact;
}
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int result=fact(n);
    printf("Fact of %d=%d",n,result);
    return 0;
}