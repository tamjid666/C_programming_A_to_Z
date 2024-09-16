/*
         multipication table like

         3 * 1 = 3
         3 * 2 = 6
         3 * 3 = 9
         .........

         3 * 10 = 30

*/

#include<stdio.h>

int main()
{
    printf("I desgin the multipication table\n \n");

    int num,num2;
    printf("Enter Your Number : ");
    scanf("%d",&num);

    printf("Here Your Multipication Table\n\n");
    printf("\tPress Enter\n\n\n");
    getch();

    for(num2=1; num2<=10; num2++)
    {
        printf("\t%d * %d = %d\n",num,num2,num*num2);
    }
    getch();
}
