#include<stdio.h>

int main()
{
    printf("I desgin the multipication table\n \n");

    while(1)
    {
    int num,num2;
    printf("\n \n Enter Your Number : ");
    scanf("%d",&num);

    printf("Here Your Multipication Table\n\n");
    printf("\tPress Enter\n\n\n");
    getch();

    for(num2=1; num2<=10; num2++)
    {
        printf("\t%d * %d = %d\n",num,num2,num*num2);
    }
    }
    getch();
}
