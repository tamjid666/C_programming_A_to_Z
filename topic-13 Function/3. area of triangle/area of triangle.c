#include<stdio.h>

int main()
{
    int base,weight;

    printf("Enter Your Base : ");
    scanf("%d",&base);
    printf("\nEnter Your Weight : ");
    scanf("%d",&weight);
    int area(base,weight);
}

void area(int a,int b)
{
    printf("\nArea = %d\n",0.5*a*b);
}
