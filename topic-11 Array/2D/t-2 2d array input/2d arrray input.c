#include<stdio.h>

int main()
{
    int i,j;
    int a[3][4];
    printf("enter your row colum");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    //print
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
