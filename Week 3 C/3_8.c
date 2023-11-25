#include <stdio.h>

void sum(float arr[], int n);
void average(float arr[], int n);

int main() {
    int n = 10;
    float arr[n];
    
    printf("Enter the floats (enter -99.0 to stop):\n");
    int i;
    for (i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        if (arr[i] == -99.0) {
            break;
        }
    }

    sum(arr, i);
    average(arr, i);

    return 0;
}

void sum(float arr[], int n) {
    float sum = 0.0;
    for (int i = 0; i < n; i++) {
        if(arr[i]!=-99.0){
            sum = sum + arr[i];
    }}
    printf("Sum of all the values: %f\n", sum);
    
}

void average(float arr[], int n) {
    float sum = 0.0;
    float count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i]!=-99.0){
            sum = sum + arr[i];
            count++;
    }}
    float average = sum / count;
    printf("Average of all the values: %f\n", average);
}







