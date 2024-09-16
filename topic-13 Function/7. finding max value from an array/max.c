#include<stdio.h>

int maximum(int x[])
{
    int max,i;

    max = x[0];

    for(i=0; i<5; i++)
    {
        if(max<x[i])
            max = x[i];
    }

    return max ;
}
int main()
{
    int array[]={10,20,30,40,50};

    int maximumvalue = maximum(array);

    printf("Max = %d",maximumvalue);
}
