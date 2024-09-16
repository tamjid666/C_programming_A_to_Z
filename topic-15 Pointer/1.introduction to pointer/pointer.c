#include<stdio.h>

int main()
{
    int x = 5;
    int *ptr;

    ptr = &x;


    printf("Value of x = %d\n",x);
    printf("Address of x = %u\n",&x);
    printf("Address of x = %x\n",&x); //address always positive address;
    printf("Address of x = %d\n",ptr);
    printf("value of x = %d\n",*ptr);
    printf("address of pointer = %d\n",&ptr);


    return 0;
}
