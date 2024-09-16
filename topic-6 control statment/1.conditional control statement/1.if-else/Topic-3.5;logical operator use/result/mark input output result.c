#include<stdio.h>

int main()
{
    double mark;
    printf("Enter your mark : ");
    scanf("%lf",&mark);
    if(mark>100 || mark<0)
        printf("Result invalid");

    else if(mark<=100 && mark>=80)
        printf("A+");

    else if(mark<=79.99 && mark>=70)
        printf("A");

    else if(mark<=69.99 && mark>=60)
        printf("A-");

    else if(mark<=59.99 && mark>=50)
        printf("B");

    else if(mark<=49.99 && mark>=40)
        printf("C");

    else if(mark<=39.99 && mark>=33)
        printf("D");

    else
        printf("F");
    return 0;
}
