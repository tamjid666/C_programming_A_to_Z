#include<stdio.h>

int main()
{
    int num1,num2;
    printf("Enter Your First Number : ");
    scanf("%d",&num1);
    printf("Enter Your Second Number : ");
    scanf("%d",&num2);

    int result = sum(num1,num2);
    printf("Sum = %d",result);
}

int sum (int a,int b)
{
    return a+b ;
}
