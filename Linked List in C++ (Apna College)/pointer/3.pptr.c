#include<stdio.h>
int main()
{
    int x=12;
    int* ptr=&x;
    int **pptr=&ptr;
    printf("Value->: %d\n",**pptr);   // prints the value of x!
}