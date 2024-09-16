#include<stdio.h>

int main()
{
    int n,sum=0,i;
    printf("Enter Your Last Number : ");
    scanf("%d",&n);
    printf("\n1 + 2 + 3 + ........... + %d ",n);
    for(i=1; i<=n; i++)
    {
        sum = sum + i;
    }
    printf(" = %d",sum);
    getch();
}
