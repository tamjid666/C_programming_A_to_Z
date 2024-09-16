//write a program that takes integer and sum it and average
#include<stdio.h>

int main()
{
    int n,n1,sum;
    float avg;
    /*float data type a avg rekhechi cause
    nahoy ans whole number chole asbe  tai*/

    printf("Enter your numbers : ");
    scanf("%d %d",&n,&n1);
    sum = n + n1;
    printf("\nYours sum is ready : %d\n",sum);

    avg = (float)sum/2;
    /*variable er declaration ebhabe majkhane
    change kora jay tai jake (Type casting) bole*/

    printf("your plus average is : %.3f\n",avg);
    return 0;
}
