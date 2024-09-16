#include<stdio.h>

int main()
{
    int num,count=0;
    printf("Enter Your Number : ");
    scanf("%d",&num);
    while(num!=0)
    {
        num = num / 10;
        ++count;
    }
    printf("Count Of Number is : %d",count);
    return 0;
}
