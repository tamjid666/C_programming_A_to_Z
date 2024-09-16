#include<stdio.h>

int main()
{
    char lower;
    printf("Enter any lowercase letter : ");
    scanf("%c",&lower);//a=97
    printf("The uppercase latter : %c",lower-32);
    /* ascii a = 97 er theke 32 minus korle
    65 jeta A er asci value er soman hoye jabe*/
    return 0;
}
