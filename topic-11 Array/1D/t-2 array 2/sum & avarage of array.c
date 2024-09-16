#include<stdio.h>

int main()
{
    int a[100],i,sum=0,n;
    printf("How Many Number : ");
    scanf("%d",&n);
    printf("Enter Your Numbers Here = ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        sum = sum + a[i];
    }
    printf("sum : %d\n",sum);
    printf("average : %.2lf",(double)sum/n);
    return 0;
}
