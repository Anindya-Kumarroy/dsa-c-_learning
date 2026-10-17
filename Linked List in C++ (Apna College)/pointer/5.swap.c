#include<stdio.h>

void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}

int main()
{
    int x=4,y=5;
    printf("Before swapping-> x:%d ,y:%d \n",x,y);
    swap(&x,&y);
    printf("After swapping:-> x:%d, y:%d\n",x,y);
    return 0;
}o