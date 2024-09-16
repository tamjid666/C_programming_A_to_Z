#include<stdio.h>

int main ()
{
    double cen,fah;
    printf("Centigrade = ");
    scanf("%lf",&cen);
    fah = (double) 32 + 9 * cen / 5;
    printf("Fahrenheit = %.2lf",fah);
    return 0;
}
