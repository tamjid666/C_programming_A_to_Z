#include<stdio.h>

int main()
{
    double base,exp,result = 1,i;
    printf("Base : ");
    scanf("%lf",&base);
    printf("Exp : ");
    scanf("%lf",&exp);

    for(i=1; i<=exp; i++)
    {
        result = result * base;
    }

    printf("Result : %0.2lf",result);
}
