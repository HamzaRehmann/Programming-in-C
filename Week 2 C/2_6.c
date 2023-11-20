#include <stdio.h>

int main() {

    double x,y;
    printf("Enter x:");
    scanf("%lf",&x);
    printf("Enter y:");
    scanf("%lf",&y);

    double *ptr_one;
    double *ptr_two;
    double *ptr_three;

    ptr_one = &x;
    ptr_two = &x;
    ptr_three = &y;

    printf("Memory address of ptr_one: %p\n",ptr_one);
    printf("Memory address of ptr_two: %p\n",ptr_two);
    printf("Memory address of ptr_three: %p\n",ptr_three);

    return 0;


}