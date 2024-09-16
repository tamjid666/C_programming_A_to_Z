//concat without strcat function
#include<stdio.h>

int main()
{
    char str1[100],str2[100];

    printf("Enter first stirng: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    int i=0, len =0 ,j=0 ;

    while(str1[i]!='\0')
    {
        len++;
        i++;
    }

    while(str2[j]!='\0')
    {
        str1[len+j]=str2[j];
    }

    printf("String 1 = %s\n",str1);

    return 0;
}
