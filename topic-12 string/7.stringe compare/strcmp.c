#include<stdio.h>

int main()
{
    char str1[]="Abdullah Al tamjid";
    char str2[]="Abdullah";

    int d= strcmp(str1,str2);
    if(d==0)
        printf("String are equal ");
    else
        printf("String are not equal");
    return 0;
}
