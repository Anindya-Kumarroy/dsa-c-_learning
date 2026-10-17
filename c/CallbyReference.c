#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return ;
}
int main()
{
    int a,b;
    printf("Enter a,b:");
    scanf("%d%d",&a,&b);
    printf("Before swapping a=%d,b=%d\n",a,b);
    swap(&a,&b);
    printf("After swapping a=%d,b=%d",a,b);
    return 0;
}