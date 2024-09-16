#include<stdio.h>

void sum(int a,int b,int c)//jokhon kono kichu return korbe na tokhon void ana lagbe
{
    printf("Sum = %d",a+b+c);
}

void sub(int b,int c)
{
    printf("\nThe subtraction is : %d",c-b);
}

int main()
{
    sum(5,6,7);
    sub(20,10);
}
