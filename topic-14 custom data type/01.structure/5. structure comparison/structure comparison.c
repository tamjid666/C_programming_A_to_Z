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

    if(person1.age == person2.age && person2.salary== person1.salary)
        printf("person1 equal person2");
    else
        printf("Person 1 not equal person 2");

    getch();
}
