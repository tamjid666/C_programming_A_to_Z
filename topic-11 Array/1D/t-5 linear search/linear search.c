#include<stdio.h>

int main()
{
    int a[]={10,2,30,15,28,5};

    int value,pos= 0,i;
    printf("Enter Your value your want to search : ");
    scanf("%d",&value);

    for(i=0; i<6; i++)
    {
        if(value==a[i])
        {
            pos = i + 1;
            break;
        }
    }
    if(pos==0)
        printf("Item Not Found");
    else
    printf("The number %d position = a[%d]",pos,i);
    return 0;
}
