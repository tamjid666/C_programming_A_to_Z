#include<stdio.h>

int main()
{
    char source[100],target[100];
    printf("Enter Your String : ");
    gets(source);
    strcpy(target,source);
    printf("Target String : %s",source);
    return 0;
}
