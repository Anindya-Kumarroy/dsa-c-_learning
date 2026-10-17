#include<stdio.h>
int main()
{
    int n, i,pos=1;
    int arr[6]={22,33,4,55,6,23};
    printf("Enter the number u wanna search:");
    scanf("%d",&n);
    for(i=0;i<6;i++)
    {
        if(arr[i]==n)
        {
            pos=pos+i;
        }
    }
    if(pos==1)
    {
        printf("Number not found!");
    }
    else 
    {
        printf("%d found at position %d",n,pos);

    }
    return 0;
}