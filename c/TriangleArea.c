#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;
    printf("Enter three numbers:");
    scanf("%lf%lf%lf",&a,&b,&c);
    double s=(a+b+c)/2;
    double area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area = %lf",area);
    return 0;
}