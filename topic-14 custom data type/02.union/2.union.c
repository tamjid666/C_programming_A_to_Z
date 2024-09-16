#include<stdio.h>

union test1
{
    int x,y;
};
union test
{
    int x;
    char ch;
};
union test3
{
    char name[100];
    double d;
};

int main()
{
    union test1;
    union test2;
    union test3;

    printf("Size of test 1 %d\n",sizeof(test1));
    printf("Size of test 2 %d\n",sizeof(test2));
    printf("Size of test 3 %d\n",sizeof(test3));
    return 0;
}
