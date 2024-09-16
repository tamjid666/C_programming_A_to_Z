#include<stdio.h>

int main()
{
    char str[100];
    printf("Enter A Line : ");
    gets(str);

    strupr(str);
    printf("Stringe Upper case : %s\n",str);

    strlwr(str);
    printf("Stringe Lower case : %s\n",str);
    return 0;
}
