#include<stdio.h>

int main()
{
    int num1=10,num2 = 5,temp;
    temp= num1;
    num1= num2;
    num2= temp;
    printf("num1 = %d\n",num1);
    printf("num2 = %d\n",num2);
    return 0;
}
