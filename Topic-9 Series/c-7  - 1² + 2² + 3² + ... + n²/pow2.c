#include<stdio.h>

int main()
{
    int num,sum=0,i=1;
    printf("Enter Your Number : ");
    scanf("%d",&num);
    while(i<=num)
    {
        sum = sum + i*i;
        i++;
    }
    printf("1² + 2² + 3² + ... + %d² = %d",num,sum);
    return 0;
}
