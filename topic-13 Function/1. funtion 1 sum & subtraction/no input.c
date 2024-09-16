#include<stdio.h>

int sum(int a,int b)
{
    return a+b ;
}
int main()
{
    int result = sum(5,6);
    printf("Sum = %d\n",result);

    result = sum(3,6);
    printf("Sum = %d\n",result);


    result = sum(5,6);
    printf("Sum = %d\n",result);
}
