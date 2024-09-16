#include<stdio.h>

struct person
{
    char name[50];
    int age;
    float salary;
};

int main()
{
    struct person tamjid[100],aryan[4];
    int i;

    for(i=0; i<4; i++)
    {
        printf("information for tamjid child %d \n",i+1);
        printf("Name : ");

        fflush(stdin);//standard inout string er loop neyar jonno fflash(stdin)
        gets(tamjid[i].name);

        printf("Age : ");
        scanf("%d",&tamjid[i].age);
        printf("Salary : ");
        scanf("%f",&tamjid[i].salary);
        printf("\n");
    }

    for(i=0; i<4; i++)
    {
        printf("Name : %s\n",tamjid[i].name);
        printf("tamjid child%d age : %d\n",i,tamjid[i].age);
        printf("tamjid child%d Salary : %f\n",i,tamjid[i].salary);
    }
   return 0;
}
