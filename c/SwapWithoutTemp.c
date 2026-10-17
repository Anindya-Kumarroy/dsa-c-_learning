#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a,b:");
    scanf("%d%d",&a,&b);
    b=b-a;
    a=a+b;
    b=a-b;
    printf("a=%d,b=%d",a,b);
    return 0;
}