#include<stdio.h>

struct person
{
    char name[40];
    int age;
    float salary;
};


void display(struct person x[])
{
    int i;
    for(i=0; i<3; i++)
    {
        printf("Name : %s\n",x[i].name);
        printf("Age : %d\n",x[i].age);
        printf("Salary : %f\n\n",x[i].salary);
    }
}


int main()
{
    struct person tamjid[10];
    int i;

    for(i=0; i<3; i++)
    {
        printf("Tamjid %d\n",i+1);
        printf("Name : ");
        fflush(stdin);
        gets(tamjid[i].name);
        printf("Age : ");
        scanf("%d",&tamjid[i].age);
        printf("Salary : ");
        scanf("%f",&tamjid[i].salary);
    }

    display(tamjid);
}
