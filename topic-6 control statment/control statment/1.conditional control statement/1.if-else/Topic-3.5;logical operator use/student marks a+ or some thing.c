#include<stdio.h>

int main()
{
    float mark;
    printf("Enter your marks : ");
    scanf("%f",&mark);
    if(mark>=80)
        printf("A+");

    if(mark>=70)
        printf("A");

    if(mark>=60)
        printf("A-");

    if(mark>=50)
        printf("B");

    if(mark>=40)
        printf("V");

    if(mark<=40)
        printf("F");
    return 0;
}
