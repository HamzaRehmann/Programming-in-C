#include <stdio.h>

double sum25(double v[], int n);

int main() {
    int n;
    printf("Enter the integer:");
    scanf("%d",&n);
    double arr[20];
    printf("Enter the array elements:");
    for(int i=0; i<n; i++){
        scanf("%lf",&arr[i]);
    }

    sum25(arr,n);

    return 0;

}

double sum25(double v[], int n) {
    double sum=0.0;
    if(n>=6){
        sum = v[2] + v[5];
        printf("The sum of position 2 and 3 is: %lf\n",sum);
    }
    else {
        printf("Invalid positions");

        sum = -111;   
        }
    return sum;
}