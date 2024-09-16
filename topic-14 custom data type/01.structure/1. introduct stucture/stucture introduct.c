#include<stdio.h>


//global stucture
struct person//person datatype
{
    //collection of variable
    int age;
    float salary;
};
int main()
{
    struct person person1,person2;//person1,person2 veriable
    person1.age = 23;
    person1.salary = 343534.2;

    printf("Person 1 : \n");
    printf("Age : %d\n",person1.age);
    printf("Salary : %f\n",person1.salary);

    person2.age = 87;
    person2.salary = 98334.2;

    printf("\nPerson 2 : \n");
    printf("Age : %d\n",person2.age);
    printf("Salary : %f",person2.salary);
    getch();
}
