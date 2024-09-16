//sum = 1 - 2 + 3 - 4 + ....... N
//SUM = (1+3+5+.....)-(2+4+6+....)
#include<stdio.h>

int main()
{
    int num,i,even = 0,odd=0;
    printf("Enter Your Last Number : ");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
        if(i%2==0)
            even = even + i;
        else
            odd = odd + i;
    }
    printf("sum = %d\n",even - odd);
    return 0;
}
