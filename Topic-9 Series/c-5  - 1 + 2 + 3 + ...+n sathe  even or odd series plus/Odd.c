#include<stdio.h>

int main()
{
    int num,a=1,sum=0;
    printf("Enter Your Number : ");
    scanf("%d",&num);
    while(a<=num)
    {
        sum  = sum + a;
        a = a + 2;
    }
    printf("1 + 3 + 5 + ... + %d = %d",num,sum);
    return 0;
}
