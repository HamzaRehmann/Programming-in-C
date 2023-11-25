#include <stdio.h>

void cel2f(double arr[]);

int main() {

    char c;
    printf("Enter the character:");
    scanf("%c",&c);
    int n;
    printf("Enter the integer:");
    scanf("%d",&n);

    double temperatures[100];
    printf("Enter the temperatures:");
    for(int i=0; i<n;i++) {
        scanf("%lf",&temperatures[i]);
    }

    double sum = 0.0;

    switch (c) {
    case 's' : for(int j=0; j<n; j++){
        sum = sum + temperatures[j];
        }
        printf("The sum of all the temperatures is: %lf\n",sum);
        break;
    case 'p' : for(int i=0; i<n;i++) {
        printf("%lf\n",temperatures[i]);
        }
        break;
    case 't' : for(int i =0; i<n; i++) {
        double far = (temperatures[i] * 1.8) + 32;
        printf("%lf\n",far);
        }
        break;
    default : for(int i =0; i<n; i++) {
        sum = sum + temperatures[i];
        }
        double average = sum/n;
        printf("%lf\n", average);
        break;
     
    }

    return 0;

    

}


