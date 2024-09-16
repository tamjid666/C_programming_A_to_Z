//break and continue statement
#include<stdio.h>

int main()
{
    int i;
    for(i=1; i<20; i++)
    {
        if(i%3==0)
            continue;//bypass
        printf("%d\n",i);

        if(i==10)
            break;//loop tarminator
    }
    getch();
}
/*
1
2
(3)print korbe na cause 3 diye div korle shorto(3 diye bhag korle bhag ssesh 00 thakbe) manbe tai
  continue bypass kore nibe,tai ar printf function aa jete parbe na print oo korbe na
4
5
(6)print korbe na cause 3 diye div korle shorto manbe tai
continue bypass kore nibe,tai ar printf function aa jete parbe na
7
8
(9)print korbe na cause 3 diye div korle shorto(3 diye bhag korle bhag ssesh 00 thakbe) manbe tai
  continue bypass kore nibe,tai ar printf function aa jete parbe na print oo korbe na

10
ekhane i==10 ai shorter pore terminate korar jonno brake statement deya hoiche
break na dile loop continue condition hisebe jaitei thaktw jaitei thaktw

*/
