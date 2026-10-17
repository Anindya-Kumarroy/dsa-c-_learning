#include<stdio.h>
int power(int base,int exp)
{
    if(exp==0)
    {
        return 1;
    }
    return base*power(base,exp-1);
}
int main()
{
    int base,exp;
    printf("Enter base:");
    scanf("%d",&base);
    printf("Enter exp:");
    scanf("%d",&exp);
    int ans= power(base,exp);
    printf("%d^%d=%d",base,exp,ans);
    return 0;
}