#include<stdio.h>

int main()
{
    float radius,area;
    printf("Radius : ");
    scanf("%f",&radius);
    area = 3.1416*radius*radius;
    printf("The area of circle is : %.2f",area);
    return 0;
}
