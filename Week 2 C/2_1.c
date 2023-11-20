#include <stdio.h> 

int main() {

    double x;
    printf("Enter x: \n");
    scanf("%lf",&x);
    double y;
    printf("Enter y: \n");
    scanf("%lf",&y);

    double sum = x+y;
    printf("sum of doubles=%lf\n",sum);

    double diff = x-y;
    printf("difference of doubles=%lf\n",diff);

    double squa = x*x;
    printf("square=%lf\n",squa);

    int a;
    printf("Enter a: \n");
    scanf("%d",&a);
    int b;
    printf("Enter b: \n");
    scanf("%d",&b);

    printf("sum of integers=%d\n",a+b);
    printf("product of integers=%d\n",a*b);

    char c;

    printf("Enter char 1: \n");
    scanf(" %c",&c);

    char d;
    printf("Enter char 2: \n");
    scanf(" %c",&d);

    int sum2 = c + d;
    int product = c*d;

    printf("sum of chars=%d\n",sum2);
    printf("product of chars=%d\n",product);

    printf("sum of chars=%c\n",sum2);
    printf("product of chars=%c\n",product);

    return 0;



}