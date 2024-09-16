#include<stdio.h>

int main()
{
    int num;
    printf("Enter Your Number : ");
    scanf("%d",&num);
    squre(num);
}

void squre(int a)
{
    printf("Squre = %d",a*a);
}
