#include<stdio.h>

int main()
{
    int n,row,col;
    printf("Enter Your N : ");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            printf("  ");
        }
        for(col=1; col<=row*2-1; col++)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
    for(row=n; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
        {
            printf("  ");
        }
        for(col=1; col<=row*2-1; col++)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
    return 0;
}
