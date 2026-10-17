#include<stdio.h>
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp; 
    printf("In swap function a=%d,b=%d\n",a,b);
    return ;
}
int main()
{
    int a,b;
    printf("Enter a,b:");
    scanf("%d%d",&a,&b);
    swap(a,b);
    printf("After swapping : a=%d,b=%d",a,b);
    return 0;
}