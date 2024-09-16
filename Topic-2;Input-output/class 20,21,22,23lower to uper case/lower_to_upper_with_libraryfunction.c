#include<stdio.h>

int main()
{
    char lower,upper;
    printf("Enter your lowercase letter : ");
    scanf("%c",&lower);

    upper = toupper(lower);
    /*toupper is library function
    ata lowercase ke uppercase a covert kore*/
    printf("Here your uppercase letter : %c",upper);
    return 0;
}
