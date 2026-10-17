#include<stdio.h>
int max(int a[5])
{
    int max=a[0];
    int i;
    for(i=0;i<=5;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    return max;
}
int main()
{
    int a[5]={1,2,3,88,5};
    int maximumvalue=max(a);
    printf("Maximum value =%d",maximumvalue);
    return 0;
}