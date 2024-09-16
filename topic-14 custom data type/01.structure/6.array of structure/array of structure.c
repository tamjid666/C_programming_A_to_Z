#include<stdio.h>

struct person
{
    int age;
    float salary;
};

int main()
{
    struct person person[4];
    int i;

    for(i=1; i<=4; i++)
    {
        printf("Enter Information For Person %d \n",i);
        printf("Age : ");
        scanf("%d",&person[i].age);
        printf("Salary : ");
        scanf("%f",&person[i].salary);
        printf("\n\n");
    }

    for(i=1; i<=4; i++)
    {
        printf("\n Information For Person %d\n",i);
        printf("Age : %d\n",person[i].age);
        printf("Salary : %f\n",person[i].salary);
    }

    return 0;
}
