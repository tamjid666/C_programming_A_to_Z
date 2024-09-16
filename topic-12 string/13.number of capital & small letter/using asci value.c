#include<stdio.h>

int main()
{
    char str[100];
    int capital,small,digit,i;
    i=capital=small=digit=0;

    printf("Enter Your String : ");
    gets(str);

    while(str[i]!='\0')
    {
        if(str[i]>=65 && str[i]<=90)
            capital++;

        else if(str[i]>=97 && str[i]<=122)
            small++;

        else if(str[i]>=48 && str[i]<=57)
            digit++;
        i++;
    }

    printf("Number Of Capital Letter = %d\n",capital);
    printf("Number Of Small Letter = %d\n",small);
    printf("Number Of Digit Letter = %d\n",digit);

    return 0;
}
