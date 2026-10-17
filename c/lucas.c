#include<stdio.h>
int main()
{
    int n,i,a=2,b=1;
    printf("Enter n:");
    scanf("%d",&n);
    printf("%d\t%d\t",a,b);
    for(i=2;i<n;i++)
    {
        int lucas=a+b;
        printf("%d\t",lucas);
        a=b;
        b=lucas;
    }
return 0;
}