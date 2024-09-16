#include<stdio.h>

int main()
{
    char string[100],ch;
    printf("Enter Your String : ");
    gets(string);


    int capital,i,small,digit;

    i=capital=small=digit=0;
    while((ch=string[i])!='\0')
    {
        if(ch>='A'&&ch<='Z')
            capital++;
        else if(ch>='a' && ch<='z')
            small++;
        else if(ch>='0' && ch<='9')
            digit++;
        i++;
    }

    printf("Capital Letter = %d\n",capital);
    printf("Small Letter = %d\n",small);
    printf("Digit Letter = %d\n",digit);

    return 0;
}
