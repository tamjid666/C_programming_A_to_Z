#include<stdio.h>

int main()
{
    char str[100],ch;
    int i,vowel,consonants,word,digit,other;

    printf("Enter Your String : ");
    gets(str);

    i=vowel=consonants=word=digit=other=0;

    while((ch=str[i])!='\0')
    {
        if(ch=='a'||ch=='e'||ch=='o'||ch=='u'||ch=='i'||ch=='A'||ch=='E'||ch=='O'||ch=='U'||ch=='I')
            vowel++;
        else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
            consonants++;
        else if(ch>='0' && ch<='9')
            digit++;
        else if(ch==' ')
            word++;
        else
            other++;

        i++;
    }
    word++;

    printf("Number Of Vowel : %d\n",vowel);
    printf("Number Of consonants : %d\n",consonants);
    printf("Number Of digit : %d\n",digit);
    printf("Number Of word : %d\n",word);
    printf("Number Of other : %d\n",other);

    return 0;
}
