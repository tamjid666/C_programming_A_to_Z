#include<stdio.h>

int main()
{
    int num,fibo,first = 0,second = 1,i;
    printf("Enter Your Number : ");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
        if(i==1)
            printf("0");
        else if(i==2)
            printf("\t1");
        else
        {
            fibo = first + second;
            printf("\t%d",fibo);
            first = second ;
            second = fibo ;
        }
    }
    return 0;
}
