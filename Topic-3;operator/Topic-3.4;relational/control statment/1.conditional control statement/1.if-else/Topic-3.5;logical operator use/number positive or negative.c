#include<stdio.h>

int main()
{
    int num;
    printf("Enter your number : ");
    scanf("%d",&num);
    if (num>0)
        printf("Positive");
    else if(num<0)
        printf("Negative");
    else
        printf("zero");
    return 0;
}
