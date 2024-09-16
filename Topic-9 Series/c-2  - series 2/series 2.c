#include<stdio.h>

int main()
{
    int n,sum=0,a=1;
    printf("Enter Last Number : ");
    scanf("%d",&n);
    printf("\n 1 + 2 + 3 + ..... + %d",n);
    while(a<=n)
    {
        sum = sum + a;
        a++;
    }
    printf(" = %d",sum);
    return 0;
}
