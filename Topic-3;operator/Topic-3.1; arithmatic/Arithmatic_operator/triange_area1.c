#include<stdio.h>

int main()
{
    float base,height,area;
    printf("Base = ");
    scanf("%f",&base);
    printf("height = ");
    scanf("%f",&height);
    area = (float)1/2 * base * height;
    /*float deya hoyeche cause 1/2 integer
    type number 0.5 use korte pari na korte chaile
    jekono ektake float kore dei(atake type custing)
    bola jete pare*/

    printf("area = %0.3f\n",area);
    return 0;
}
