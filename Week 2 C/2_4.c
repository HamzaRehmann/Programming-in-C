#include <stdio.h>

int main() {

    float a,b,h;

    printf("Enter a: ");
    scanf("%f",&a);

    printf("Enter b: ");
    scanf("%f",&b);

    printf("Enter h: ");
    scanf("%f",&h);

    float square = a*a;

    float rectangle = a*b;

    float triangle = 0.5*a*h;

    float trapezoid = 0.5*(a+b)*h;

    printf("square area=%f\n",square);
    printf("rectangle area=%f\n",rectangle);
    printf("triangle area=%f\n",triangle);
    printf("trapezoid area=%f\n",trapezoid);

    return 0;

}