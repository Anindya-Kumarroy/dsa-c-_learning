#include<stdio.h>
int main()
{
    int n,temp,rem,sum=0;
    printf("Enter n:");
    scanf("%d",&n);
    temp=n;
while (temp!=0)
{
    rem=temp%10;
    sum=sum+rem*rem*rem;
    temp=temp/10;
}
if(sum==n)
{
    printf("Armstrong number.");
}
else 
{
    printf("Not Armstrong number.");

}
return 0;
}