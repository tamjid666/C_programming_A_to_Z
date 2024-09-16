//area = sqrt(s*(s-a)*(s-b)*(s-c)
//s=(a+b+c)/2[semi pera metar

#include<stdio.h>

int main()
{
    float a,b,c,s,area;
    /*double keyword neya better cause
     ekhane sqrt,multipication,division,plus,minus tai
     double type variable neya uchit ata program vlo bujhbe
    */
    printf("Sides of the triangle = ");
    scanf("%f %f %f",&a ,&b ,&c);
    s=(a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area = %.2f",area);
    return 0;
}
