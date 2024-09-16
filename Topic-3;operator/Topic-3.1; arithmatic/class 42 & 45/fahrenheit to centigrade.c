#include<stdio.h>

int main()
{
    double fah,cen;
    printf("Fahrenheit = ");
    scanf("%lf",&fah);
    cen = (double)5*(fah-32)/9;
    printf("Centigrade = %lf",cen);
    return 0;
}
