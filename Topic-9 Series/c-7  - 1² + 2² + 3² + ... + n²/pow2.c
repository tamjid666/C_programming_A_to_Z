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
    printf("1� + 2� + 3� + ... + %d� = %d",num,sum);
    return 0;
}
