#include<stdio.h>
void function(int s,int n)
{
    if(n==0)
    {
        printf("Sum=%d",s);
        return;
    }
    else
    function(n+s,n-1);
         return;
}
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    function(0,n);
    return 0;
}