/*
 control statement -
 1: conditional control statement
 2: loop control statement
*/
/*
1: conditional control statement:
        1: if-else
        2: switch
*/
//if-else
#include<stdio.h>

int main()
{
    int num;
    printf("Enter a integer number : ");
    scanf("%d",&num);

    if(num%2==0)
        printf("Even\n");
    if(num%2!=0)
        printf("Odd\n");
    return 0;
}
