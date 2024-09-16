#include<stdio.h>

int main()
{
    int num1,num2,large;
    printf("Enter your numbers: ");
    scanf("%d %d",&num1,&num2);

    large = num1>num2 ? num1 : num2 ;
    /* "?" mark er ager jaga ta true hole
     ":" symble er ager jaga ta kaj korbe
     false hole symble er porer jaga ta kaj korbe */

    printf("Large number is : %d",large);
    return 0;
}
