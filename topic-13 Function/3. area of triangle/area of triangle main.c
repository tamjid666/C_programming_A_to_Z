#include<stdio.h>

double areatriangle(double b, double h);

int main()
{
    double base,height;
    printf("Base : ");
    scanf("%lf",&base);
    printf("Height : ");
    scanf("%lf",&height);

    double area = areatriangle(base,height);

    printf("Area = %0.2lf",area);
}

double areatriangle(double b, double h)
{
   return 0.5 * b * h ;
}
