#include<stdio.h>

int main()
{
    int n,array1[100],array2[100],i;
    printf("How Many Number : ");
    scanf("%d",&n);
    printf("Enter Your Numbers : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&array1[i]);
    }

    printf("Array1 : ");
    for(i=0; i<n; i++)
    {
        printf("%d\t",array1[i]);
    }

    //coping array 2
    printf("\nArray2 : ");
    for(i=0; i<n; i++)
    {
        array2[i] = array1[i];
        printf("%d\t",array2[i]);
    }
    getch();
}
