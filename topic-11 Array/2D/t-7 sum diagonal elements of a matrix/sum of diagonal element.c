#include<stdio.h>

int main()
{
    int a[3][3],i,j,sum=0;
    printf("Enter your element : \n");
    //scaning a
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    //print a
    printf("Entered matrix \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    //sum of diagonal element
    printf("Diagonal element ! :: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i==j)
            {
                printf("\n%d ",a[i][j]);
                sum = sum + a[i][j];
            }
        }
    }
    printf("\n \nsum of diagonal elements = %d ",sum);
    return 0;
}
