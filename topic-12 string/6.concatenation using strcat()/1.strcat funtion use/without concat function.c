//concat string without strcat function
#include<stdio.h>

int main()
{
    char str1[1000]="My name is ";
    char str2[]="Tamjid";
    int i=0, len =0, j=0;
    while(str1[i]!='\0')
    {
        i++;
        len++;
    }

    while(str2[j]!='\0')
    {
        str1[len+j]=str2[j];
        j++;
    }

    printf("String 1 = %s",str1);
    return 0;
}
