#include<stdio.h>
int main()
{
    int choice;
    float convertedtemp,celcius,fahrenheit;
    printf("----------------Temp Conversion Menu-------------\n");
    printf("1.Celcius to Fahrenheit\n");
    printf("2.Fahrenheit to Celcius\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            printf("Enter Celcius Temperature:");
            scanf("%f",&celcius);
            float Fahrenheit=(1.8*celcius+32);
            printf("Fahrenheit temp =%f\n",Fahrenheit);
            break;
        }
        case 2:
        {
            printf("Enter Fahrenheit Temperature:");
            scanf("%f",&fahrenheit);
            float Celcius=((fahrenheit-32)*(.56));
            printf("Celcius temp =%f\n",Celcius);
            break;
        }
        default:
        printf("Not a valid choice.\n");
    }

}