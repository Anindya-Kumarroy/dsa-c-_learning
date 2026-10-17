#include<stdio.h>
void _square(int* x)
{
    *x=(*x)*(*x);
    printf("cbr Square:%d\n",*x);
}
void square(int x)
{
    x=(x)*(x);
    printf("cbv Square:%d\n ",x);
}
int main()
{
    int x=4;
    square(x);
    printf(" cbv X:%d\n",x);
    _square(&x);
    printf("cbr x=%d\n",x);             // value will be changed in call by reference!
}