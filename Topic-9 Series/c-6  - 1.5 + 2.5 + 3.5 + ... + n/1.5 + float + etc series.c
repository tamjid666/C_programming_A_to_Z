#include<stdio.h>

int main()
{
    float num,i,sum = 0;
    printf("Enter Your Last Num : ");
    scanf("%f",&num);
    for(i=1.5; i<=num; i++)
    {
        sum = sum + i;
    }
    printf("1.5 + 2.5 + 3.5 + ... + %.2f = %.2f",num,sum);
    return 0;
}
