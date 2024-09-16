#include<stdio.h>

int main()
{
    int x,y;
    double result;
    printf("X = ");
    scanf("%d",&x);
    printf("Y = ");
    scanf("%d",&y);
    result= pow(x,y);
    printf("%.3lf",result);
    return 0;
}
