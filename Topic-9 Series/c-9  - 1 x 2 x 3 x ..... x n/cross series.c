#include<stdio.h>

int main()
{
    int num,i,sum = 1;
    printf("Enter Your Number : ");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
        sum  = sum * i ;

        if(i==1)
            printf("\n 1");
        else if(i==num)
            printf(" x %d",num);
        else
            printf(" x %d",i);
    }
    printf(" = %d",sum);
    return 0;
}
