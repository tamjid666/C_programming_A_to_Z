#include<stdio.h>

int main()
{
    int n,row,col;
    printf("Enter Your N : ");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n; col++)
        {
            if(row==col||row+col==n+1)
                printf("X ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
