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

    //taking person 1 salary
    printf("Person 1\n");
    printf("Age : ");
    scanf("%d",&person1.age);
    printf("Salary : ");
    scanf("%f",&person1.salary);



    printf("Person 1 : \n");
    printf("Age : %d\n",person1.age);
    printf("Salary : %f\n",person1.salary);

    //taking person 2 age salary
    printf("Person 2\n");
    printf("Age : ");
    scanf("%d",&person2.age);
    printf("Salary : ");
    scanf("%f",&person2.salary);

    printf("\nPerson 2 : \n");
    printf("Age : %d\n",person2.age);
    printf("Salary : %f",person2.salary);
    return 0;
}
