#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    int b[5] ;   
    int i;
    printf("Array a:\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);  
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        b[i]=arr[i];

    }
    printf("Array b:\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",b[i]);
    }
    return 0;
}