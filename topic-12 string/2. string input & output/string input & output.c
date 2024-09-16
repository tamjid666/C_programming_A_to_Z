#include<stdio.h>

int main()
{
    char s1[30];

    printf("Enter Your full Name : ");
    scanf("%s",&s1);
    /*full name out put dibe na cause scanf er modde space thakle
    er por ar kono input ney na tai **gets** library function use kora lage*/

    printf("full name = %s",s1);
    return 0;
}
