#include<stdio.h>
int main()
{
int n,temp,reverse=0,rem;
printf("Enter a number:");
scanf("%d",&n);
temp=n;
while (temp!=0)
{
    rem=temp%10;
    reverse=reverse*10+rem;
    temp=temp/10;
}
if(reverse==n)
printf("Palindrome");
else
printf("Not Palindrome");
return 0;

}