#include<stdio.h>

int main()
{
    int num,temp,rem,sum=0;
    printf("Enter any number : ");
    scanf("%d",&num);
    temp=num;

    while(temp!=0)
    {
        rem=temp%10;
        sum= sum + rem;
        temp= temp/10;
    }
    printf("Sum is : %d",sum);
    return 0;
}
