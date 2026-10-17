#include<stdio.h>
int main()
{
    int n,i=2,count=0;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
           ++count;
        }
       
    }
    if(count==0)
    {
        printf("%d is a Prime number",n);
    }
    else 
    printf("%d is not a prime number.",n);
    return 0;
}