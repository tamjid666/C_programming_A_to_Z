#include<stdio.h>

int main()
{
    char upper,lower;
    printf("Enter your uppercase letter: ");
    scanf("%c",&upper);
    lower = tolower(upper);
    printf("Here your lowercase latter is : %c",lower);
    return 0;
}
