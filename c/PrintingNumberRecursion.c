#include<stdio.h>
void send(int x,int n)
{
    if(x>n)
    {
        return;
    }
    else
    {
        printf("%d\t",x);
    }
    send(x+1,n);
}
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    send(1,n);
    return 0;
}