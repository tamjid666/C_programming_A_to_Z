#include<stdio.h>

int main()
{
    int a[5] = {10, 20 , 30 ,40 , 50 } , i;

    int *ptr ;

    ptr = &a[0] ;

    for (i =0; i<5 ; i++)
    {
        printf("%d\n",*ptr) ;
        ptr++; //ptr0 index to next index that's why ptr increment

    }
    return 0;
}
