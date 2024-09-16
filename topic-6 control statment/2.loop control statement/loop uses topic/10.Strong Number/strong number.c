#include<stdio.h>

int main()
{
    int num,temp,rem,sum=0,i,fact;
    printf("Enter Any Number : ");
    scanf("%d",&num);
    temp = num;
    while(temp!=0)
    {
        rem = temp % 10;

        fact = 1;
        for(i=1; i<=rem; i++)
        {
            fact = fact * i ;
        }

        sum = sum + fact;
        temp = temp / 10;
    }
    if(sum==num)
        printf("%d is A Strong Number",sum);
    else
        printf("%d is Not A Strong Number",sum);
    return 0;
}
