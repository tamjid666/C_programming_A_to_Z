#include<stdio.h>

int main()
{
    int i,j,row,col;
    int a[10][10],b[10][10],c[10][10];
    printf("Enter the number of rows & coloums = ");
    scanf("%d %d",&row,&col);

    //scaning a matrix
    printf("Enter Element for a matrix.\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    //scaning b matrix
    printf("\nEnter Element for b matrix.\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }


    //printng a matrix
    printf("A = ");
    for(i=0; i<row; i++)
    {
        printf("\t");
        for(j=0; j<col; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    //printng b matrix
    printf("\nB = ");
    for(i=0; i<row; i++)
    {
        printf("\t");
        for(j=0; j<col; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    //adding a & b matrix in c matrix
    for(i=0; i<row; i++)
    {
        printf("\t");
        for(j=0; j<col; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    //print c matrix
    printf("\n____________________\n");
    printf("(a+b)c =");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
        printf("\t");
    }
    return 0;
}
