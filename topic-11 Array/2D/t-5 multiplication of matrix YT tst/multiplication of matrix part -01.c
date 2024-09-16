#include<stdio.h>

int main()
{
    int first[10][10],second[10][10],result[10][10];
    int i,j,k,r1,r2,c1,c2,sum =0;

    printf("Enter Your Row & Column For First matrix\n");
    printf("Row : ");
    scanf("%d",&r1);
    printf("Column : ");
    scanf("%d",&c1);
    printf("Enter Your Row & Column For Second matrix\n");
    printf("Row : ");
    scanf("%d",&r2);
    printf("Column : ");
    scanf("%d",&c2);

    while(c1!=r2)
    {
        printf("Sorry!!! Multipication for matrix column1 & row 2 must be same");
        printf("Enter Your Row & Column For First matrix\n");
        printf("Row : ");
        scanf("%d",&r1);
        printf("Column : ");
        scanf("%d",&c1);
        printf("Enter Your Row & Column For Second matrix\n");
        printf("Row : ");
        scanf("%d",&r2);
        printf("Column : ");
        scanf("%d",&c2);
    }

    //scaning first matrix material
    printf("\nEnter Your First Matrix Material\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("first[%d][%d]",i,j);
            scanf("%d",&first[i][j]);
        }
        printf("\n");
    }

    //scaning second matrix metarial
    printf("\nEnter Your Second Matrix Material\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("second[%d][%d]",i,j);
            scanf("%d",&second[i][j]);
        }
        printf("\n");
    }

    //multipication
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum = sum + first[i][k] * second[k][j];
            }
            result[i][j] = sum ;
            sum =0;
        }
    }

    //printing first matrix
    printf("\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%d\t",first[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    //printing second matrix
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d\t",second[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    //printing result matrix
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
