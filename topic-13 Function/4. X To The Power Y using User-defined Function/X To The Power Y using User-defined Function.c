#include<stdio.h>


void baseExp(double base,double exp)
{
    double result = 1,i;
    for(i=1; i<=exp; i++)
    {
        result = result * base;
    }

    printf("Result : %0.2lf",result);
}
int main()
{
    double base,exp;
    printf("Base : ");
    scanf("%lf",&base);
    printf("Exp : ");
    scanf("%lf",&exp);

    baseExp(base,exp);
}
