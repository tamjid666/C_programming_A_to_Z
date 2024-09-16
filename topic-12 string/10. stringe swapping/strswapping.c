#include<stdio.h>

int main()
{
    char str1[100]="Bangladesh",str2[100]="India",temp[100];

    //before swapping
    printf("String 1 = %s\n",str1);
    printf("String 2 = %s\n",str2);

    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);

    //after swapping
    printf("String 1 = %s\n",str1);
    printf("String 2 = %s\n",str2);

    return 0;
}
