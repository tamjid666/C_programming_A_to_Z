#include<stdio.h>

int sum(int a,int b)
{
    return a+b;
}

int main()
{
    printf("SUM : %d\n",sum(5,6));

    printf("SUM : %d\n",sum(6,7));

    printf("SUM : %d\n",sum(2,7));

    printf("SUM : %d\n",sum(5,7));
    printf("SUM : %d\n",sum(9,7));
    printf("SUM : %d\n",sum(6,5));
}
