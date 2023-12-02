#include <stdio.h>
#include <math.h>

int main() {

    float x;

    float lower_limit;
    printf("Enter the lower limit:");
    scanf("%f",&lower_limit);

    float upper_limit;
    printf("Enter the upper limit:");
    scanf("%f",&upper_limit);

    float step;
    printf("Enter the step:");
    scanf("%f",&step);


    for(x=lower_limit; x<=upper_limit; x+=step) {
        float area = x*x*M_PI;
        float perimeter = 2*M_PI*x;
        printf("%f %f %f\n",x,area,perimeter);
    }

    return 0;


}