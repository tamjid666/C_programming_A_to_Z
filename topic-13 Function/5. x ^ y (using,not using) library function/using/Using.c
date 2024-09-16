#include<stdio.h>

int main()
{
    double base,exp,result;

    printf("Base : ");
    scanf("%lf",&base);

    printf("Exp : ");
    scanf("%lf",&exp);

    result = pow(base,exp);

    printf("Result = %0.2lf",result);
    return 0;
}
