#include<stdio.h>

int main()
{
    int n1,n2,a=1,b=2,sum=0;
    printf("Enter Last Number (n1*n2) = ");
    scanf("%d %d",&n1,&n2);
    printf("\n 1*2 + 2*3 + 3*4 + ....... + %dx%d",n1,n2);
    while(a<=n1 && b<=n2)
    {
        sum = sum + a*b;
        a=a+1;
        b=b+1;
    }
    printf(" = %d",sum);
    getch();
}
