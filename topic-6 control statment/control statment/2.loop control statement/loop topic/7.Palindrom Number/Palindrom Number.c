#include<stdio.h>

int main()
{
    int num,temp,rem,sum=0;
    printf("Enter Any Integer Number : ");
    scanf("%d",&num);
    temp = num ;
    while(temp!=0)
    {
        rem = temp % 10;
        sum = sum * 10 + rem;
        temp = temp / 10 ;
    }
    if(sum==num)
        printf("It's A Palindrome Number");
    else
        printf("It's Not A Palindrome Number");
    return 0;
}
