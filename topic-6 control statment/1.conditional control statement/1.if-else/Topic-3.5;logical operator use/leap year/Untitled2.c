#include<stdio.h>

int main()
{
    printf("this program take a input from user than say isn't it leap year\n\n");
    int year;
    printf("Year : ");
    scanf("%d",&year);
    if(year%400==0)
        printf("It's Leap Year\n");
    else if(year%4==0 && year%100!=0)
        printf("Its's Leap Year\n");
    else
        printf("It's not Leap Year\n");
    getch();
}
