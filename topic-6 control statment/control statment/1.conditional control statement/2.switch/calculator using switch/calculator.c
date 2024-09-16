#include<stdio.h>

int main()
{
    double num1,num2;
    char opa;

    printf("Enter Your operator (+,-,/,*): ");
    scanf("%c",&opa);

    printf("Enter Two Number : ");
    scanf("%lf %lf",&num1,&num2);

    switch(opa)
    {
    case '+':
    {
        printf("%lf+%lf=%lf",num1,num2,num1+num2);
        break;
    }
    case '-':
    {
        printf("%lf-%lf=%lf",num1,num2,num1-num2);
        break;
    }
    case '/':
    {
        printf("%lf/%lf=%lf",num1,num2,num1/num2);
        break;
    }
    case '*':
    {
        printf("%lf*lf=%lf",num1,num2,num1*num2);
        break;
    }
    default:
        printf("It's Not Any oparator");
    }
    return 0;
}
