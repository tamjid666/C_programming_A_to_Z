#include<stdio.h>

int main()
{
    int n,row,col;
    printf("Enter Your N : ");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            if(row==n||col==1||col==row)
                printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}
