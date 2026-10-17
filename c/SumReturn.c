#include<stdio.h>
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    int ans;
    ans=n+sum(n-1);
    return ans;
}
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int s=sum(n);
    printf("Sum =%d",s);
    return 0;
}