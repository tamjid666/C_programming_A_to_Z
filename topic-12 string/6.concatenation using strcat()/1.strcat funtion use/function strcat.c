#include<stdio.h>

int main()
{
    char str1[100],str2[100];
    printf("Enter Your First name : ");
    gets(str1);
    printf("Enter Your second name : ");
    gets(str2);

    strcat(str2,str1);

    printf("Frist String : %s\n",str1);
    printf("Second String : %s\n",str2);
    return 0;
}
