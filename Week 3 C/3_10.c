#include <stdio.h>

float product(float a, float b);
void productbyref(float a, float b, float *p);
void modifybyref(float *a, float *b);

int main() {
    float a,b,p;
    printf("Enter the float values:");
    scanf("%f",&a);
    scanf("%f",&b);

    float f1=product(a,b);
    printf("f1:%f\n",f1);
    productbyref(a,b,&p);
    printf("Product by ref: %f\n",p);
    modifybyref(&a,&b);
    printf("Function 3, a=:%f b=%f\n",a,b);

    return 0;

}

float product(float a, float b) {
    return a*b;
}

void productbyref(float a, float b, float *p){
    *p = a*b;
}


void modifybyref(float *a, float *b) {
    *a +=3;
    *b +=11;
    
}
