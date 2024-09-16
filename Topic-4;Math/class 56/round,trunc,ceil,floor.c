#include<stdio.h>
#include<stdio.h>

int main()
{
    double x = 5.5 ;
    double result = round(x);
    /*round er kaj hocche point er por jodi 5 er
    uporer songkha hoy then 5.5 take 6 banaya felbe*/
    printf("Round (%lf) = %lf\n",x,result);

    double x2 = -1.23;
    double result2 =trunc(x2);
    /*trunc library function er kaj hocche giya
    point er por flooting jaga take bad diya deya*/
    printf("Trunc(%lf) = %lf\n",x2,result2);

    double x3 = 5.5;
    double result3 =ceil(x3);
    /*ceiling er kaj hocche kacher uporer
     whole number ti print korbe*/
    printf("ceil(%lf) = %lf\n",x3,result3);

    double x4 = 5.5;
    double result4 =floor(x3);
    /*floor er kaj hocche kacher nicher
     whole number ti print korbe*/
    printf("floor(%lf) = %lf\n",x4,result4);
    return 0;
}
