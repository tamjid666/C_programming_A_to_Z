#include<stdio.h>

int main()
{
    char str[100];
    printf("Enter Your Line/word : ");
    gets(str);

    char str2[100];

    int i=0,len=0,j=0;

    while(str[i]!='\0')
    {
        i++;
        len++;
    }

    for(j=0,i=len-1; i>=0; i--,j++)
    {
        str2[j]=str[i];
    }
    str2[j]='\0';

    printf("String 1 = %s \n",str);
    printf("String 2 = %s \n",str2);

    int d= strcmp(str,str2);
    if(d==0)
        printf("It's Palindrome Stringe");
    else
        printf("It's Not Palindrome stringe");
    return 0;
}
