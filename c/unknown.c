#include<stdio.h>
int main()
{
    char a;
    printf("Enter a:");
    scanf("%c",&a);
    printf("You entered: %d",a);
    
    int arr[5];
    printf("\nEnter 5 numbers:");
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nYou entered:\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;

}