#include<stdio.h>
int main()
{
    int age=21;
    int *ptr=&age;
    int _age=*ptr;
    
    printf("Value at address: %d\n",_age);    // 21 will be printed, which stored at address of age variable!
    printf("Address:%p \n",ptr);
    printf("Address:%u \n",ptr);
}