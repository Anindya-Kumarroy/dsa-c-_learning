#include<stdio.h>
#include<string.h>
struct person{
    int age;
    float salary;
    char name[50];
};
int main()
{
    struct person person[1];
    int i;
    for(i=0;i<2;i++)
    {
        printf("Enter details for person %d\n",i);
        printf("Enter name:");
        fgets(person[i].name,50,stdin);
        person[i].name[strcspn(person[i].name,"\n")]='\0';
        printf("Enter age:");
        scanf("%d",&person[i].age);
        printf("Enter salary:");
        scanf("%f",&person[i].salary);
        getchar();
    }
    for(i=0;i<2;i++)
    {
        printf("Person %d details:\n",i);
        printf("%s\n",person[i].name);
        printf("%d\n",person[i].age);
        printf("%f\n",person[i].salary);

    }
}