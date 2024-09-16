#include<stdio.h>

int main()
{
    int choice;
    float temp,converTemp;

    printf("Temperature conversion menu\n");
    printf("1.Fahrenheit to celsius\n");
    printf("2.celsius to fahrenheit\n");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        {
            printf("Enter your fahrenheit temperature : ");
            scanf("%f",&temp);
            converTemp = (temp-32)/1.8;
            printf("Celsius temperature is : %f\n",converTemp);
            break;
        }
    case 2:
        {
            printf("Enter your celsius temperature : ");
            scanf("%f",&temp);
            converTemp =(1.8*temp)+32;
            printf("fahrenheit temperature is : %f\n",converTemp);
            break;
        }
    default:
        printf("It's Not correct choice");
    }
    return 0;
}
