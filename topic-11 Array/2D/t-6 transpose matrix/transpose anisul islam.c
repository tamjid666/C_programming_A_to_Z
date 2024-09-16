#include<stdio.h>

int main()
{
    int a[10][10],transpose[10][10],i,j,r2,row,col;
    printf("Enter Your Row & Column : ");
    scanf("%d %d",&row,&col);

    //scaning a
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    //printing a
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    //transpose matrix make & printing
    printf("\ntranspose matrix : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            transpose[j][i] = a[i][j];
        }
        printf("\n");
    }
    for(i=0; i<col; i++)
    {
        for(j=0; j<row; j++)
        {
            printf("%d ",transpose[j][i]);
        }
        printf("\n");
    }
    return 0;
}
