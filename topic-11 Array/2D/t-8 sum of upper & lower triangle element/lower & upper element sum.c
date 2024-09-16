#include<stdio.h>

int main()
{
    int a[3][3],uppersum=0,lowersum=0,i,j;
    printf("Enter Your Element : \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    //sum of upper & lower triangle
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i>j)
              lowersum = lowersum + a[i][j];
            else if(i<j)
                uppersum = uppersum + a[i][j];
        }
    }

    printf("uppersum = %d",uppersum);
    printf("\nlowersum = %d",lowersum);
    return 0;
}
