#include<stdio.h>
int main()
{
    int r1,c1,r2,c2,i,j;
    int a[3][3];
    int b[3][3];
    int c[i][j];
    printf("Enter number of rows and columns for matrix a:");
    scanf("%d%d",&r1,&c1);
    printf("Enter number of rows and columns for matrix b:");
    scanf("%d%d",&r2,&c2);
    printf("Enter values for matrix a:\n");
    for(j=0;j<r1;j++)
    {
     for(i=0;i<c1;i++)
     {
        printf("a[%d][%d]:",i,j);
        scanf("%d",&a[i][j]);
     }
     printf("\n");
    }
    printf("Matrix a:\n");
    for(j=0;j<r1;j++)
    {
        for(i=0;i<c1;i++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

printf("Enter values for matrix b:\n");
    for(j=0;j<r2;j++)
    {
     for(i=0;i<c2;i++)
     {
        printf("b[%d][%d]:",i,j);
        scanf("%d",&b[i][j]);
     }
     printf("\n");
    }
    printf("Matrix b:\n");
    for(j=0;j<r2;j++)
    {
        for(i=0;i<c2;i++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

// addition

for(j=0;j<r1;j++)
{
    for(i=0;i<c1;i++)
    {
        c[i][j]=a[i][j]+b[i][j];
    }
}
//printing c
printf("Matrix c:\n");
    for(j=0;j<r2;j++)
    {
        for(i=0;i<c2;i++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}