#include<stdio.h>

int a=5;
int main()
{
    printf("Inside the main function a = %d\n",a);
    display();
}
void display()
{
 printf("Inside the display function a = %d\n",a);//error will be shown here
 /*local variable use korar karone ekhane "a" er value
 print hobe na oita sudu jei function a use local variable
 deya thakbe oi function ai kajh korbe*/
}

