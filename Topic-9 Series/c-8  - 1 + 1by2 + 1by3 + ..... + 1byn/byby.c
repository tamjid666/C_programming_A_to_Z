#include<stdio.h>

int main()
{
    float num,sum = 0,i;
    printf("Enter Your Last Number : ");
    scanf("%f",&num);

    for(i=1; i<=num; i++)
    {
        sum = sum + 1 / i;

        if(i==1)
            printf("1  ");
        else if(i==num)
            printf(" + 1/%.0f",num);
        else
            printf(" + 1/%.0f",i);
    }
    printf(" = %.2f",sum);
    return 0;
}
