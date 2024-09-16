#include<stdio.h>

int main()
{
    char s1[] = "Abdullah Al Tamjid";

    int i=0,len=0;
    while(s1[i]!='\0')
    {
        len++;
        i++;
    }

    printf("Length = %d\n",len);
    return 0;
}
