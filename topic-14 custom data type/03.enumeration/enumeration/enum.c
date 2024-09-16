#include<stdio.h>

enum days_of_week
{
    sun,mon,tue,wed,thu,fri,sat
};
int main()
{
    enum days_of_week day1,day2;

    day2 = wed ;
    day1 = tue;

    int dif = day2-day1;

    printf("day 1 = %d\n",day1);
    printf("Duration = %d\n", dif);

    return 0;
}
