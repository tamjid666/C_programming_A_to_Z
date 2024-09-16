#include<stdio.h>

struct person
{
    int age;
    float salary;
};

int main()
{
    struct person person1 = {10,20384.234};//local variable

    struct person person2,person3;
    //element wise assignment
    person2.age = 293;
    person2.salary = 3464.33;

    //structure variable assignment
    person3 = person2;

    printf("\nPerson 1\n");
    printf("Age : %d",person1.age);
    printf("Salary : %f",person1.salary);

    printf("\nPerson 3\n");
    printf("Age : %d",person3.age);
    printf("Salary : %f",person3.salary);

    printf("\nPerson 2\n");
    printf("Age : %d",person2.age);
    printf("Salary : %f",person2.salary);
    return 0;
}
