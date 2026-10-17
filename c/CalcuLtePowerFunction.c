#include<stdio.h>
void calculatepower(int exp,int base)
{
    int result=1,i;
    for(i=1;i<=exp;i++)
    {
        result=result*base;

    }
    printf("%d^%d=%d",base,exp,result);
}
int main ()
{
    int exp,base;
    printf("Enter exponent:");
    scanf("%d",&exp);
    printf("Enter base:");
    scanf("%d",&base);
    calculatepower(exp,base);
    return 0;
}