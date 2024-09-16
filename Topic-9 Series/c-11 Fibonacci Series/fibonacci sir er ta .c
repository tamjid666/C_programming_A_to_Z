#include<stdio.h>

int main()
{
    int num,count=0,first = 0,second= 1,fibo;
    printf("Enter Your Range : ");
    scanf("%d",&num);
    while(count<num)
    {
        if(count<=1)
            fibo = count;
        else
        {
            fibo=first + second;
            first = second;
            second = fibo;
        }
        printf("%d\t",fibo);
        count++;
    }
    return 0;
}
