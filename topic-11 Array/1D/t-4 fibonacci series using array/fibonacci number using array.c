#include<stdio.h>

int main()
{
    int n,a[40],i;
    printf("How Many Fibonacci Number : ");
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    for(i=2; i<n; i++)
    {
        a[i] = a[i-1] + a[i-2];
    }
    printf("\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
    getch();
}
