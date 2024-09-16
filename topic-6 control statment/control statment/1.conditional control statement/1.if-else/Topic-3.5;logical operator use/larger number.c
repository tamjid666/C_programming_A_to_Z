#include<stdio.h>

int main()
{
    int num1,num2;
    printf("Enter your first number :");
    scanf("%d",&num1);
    printf("Enter your second number :");
    scanf("%d",&num2);

    if(num1>num2)
        printf("The larger number is : %d",num1);
    if(num1<num2)
        printf("The larger number is : %d",num2);
    else
        printf("The numbers are same");
    return 0;
}
