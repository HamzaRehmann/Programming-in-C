#include <stdio.h>
#include <math.h>

void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb) {
    *prod = a*b;
    *div = a/b;
    *pwr = pow(a,b);
    *invb = 1/b;

}

int main() {

    float a = 10.0;
    float b = 2.0;
    float prod,div,pwr,invb;

    proddivpowinv(a,b,&prod,&div,&pwr,&invb);

    //testing
    printf("Product:%f\n",prod); 
    printf("Division:%f\n",div);
    printf("power:%f\n",pwr);
    printf("invb:%f\n",invb);


    return 0;


}