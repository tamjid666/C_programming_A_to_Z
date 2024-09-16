//use gimme his/her own choice of number & this program should be out put maximum/minimum number

#include<stdio.h>

int main()
{
    int n,num[100],i;
    printf("how many number you want ?\n ²");
    scanf("%d",&n);

    printf("Enter Your Numbers = ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }

    int max = num[0],min = num[0];
    for(i=1; i<n; i++)
    {
        if(max < num[i])
            max = num[i];
        else if(min > num[i])
            min = num[i];
    }
    printf("Maximum value = %d\n",max);
    printf("Minimun value = %d\n",min);
    return 0;
}
