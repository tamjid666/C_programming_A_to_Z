#include<stdio.h>


struct person
{
    char name[50];
    int age;
    float salary;
};

void display(struct person p)
{
    printf("Name : %s\n",p.name);
    printf("Age : %d\n",p.age);
    printf("Salary : %f\n",p.salary);
}

int main()
{
    struct person tamjid;

    strcpy(tamjid.name,"Abdullah Al Tamjid");
    tamjid.age = 21;
    tamjid.salary = 234.242;

    display(tamjid);
}
