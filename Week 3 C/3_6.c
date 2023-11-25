#include <stdio.h>

//prototyping the function
float to_pounds(int kg, int g);

int main() {

    int kg,g;
    printf("Enter kilograms:");
    scanf("%d",&kg);
    printf("Enter grams:");
    scanf("%d",&g);

    printf("Conversion is:%f\n", to_pounds(kg,g) );

    return 0;


}
//declaration
float to_pounds(int kg, int g) {
    float pounds = kg*2.2 + g*2.2*0.001;
    return pounds;
}