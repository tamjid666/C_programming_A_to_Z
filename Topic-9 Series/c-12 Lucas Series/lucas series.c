#include<stdio.h>

int main()
{
    int num,lucas,first = 2 ,second =1, i ;
    printf("Enter Your Number : ");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
        if(i==1)
            printf("2");
        else if(i==2)
            printf("\t1");
        else
        {
            lucas = first + second;
            printf("\t%d",lucas);
            first = second;
            second = lucas ;
        }
    }
    return 0;
}
