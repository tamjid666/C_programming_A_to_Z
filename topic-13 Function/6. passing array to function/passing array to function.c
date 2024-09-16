#include<stdio.h>

void Display(int a)
{
    printf("%d ",a);
}

int main()
{
    int array[]={10,20,30,40,50},i;

    for(i=0; i<5; i++)
    {
        Display(array[i]);
    }
}
