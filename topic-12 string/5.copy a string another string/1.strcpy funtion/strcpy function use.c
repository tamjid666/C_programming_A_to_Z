#include<stdio.h>

int main()
{
    char source[] = "c program";
    char target[20];

    strcpy(target,source);
    //(jar modde boshabo , jar theke nibo)

    printf("Source String = %s\n",source);
    printf("Target String = %s\n",target);
    return 0;
}
