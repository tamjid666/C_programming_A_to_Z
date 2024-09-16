#include<stdio.h>

int main()
{
    int num,i,count = 0;
    printf("Enter Any positive Number: ");
    scanf("%d",&num);

    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            count++;
             break;
        }
    }
    if(count==0)
        printf("Prime number");
    else
        printf("Not Prime number");
    return 0;
}
