#include <stdio.h>
#include <math.h>

float geometric_mean(float arr[], int num){
    float product = 1.0;
    for(int i=0; i<num; i++){
        product*=arr[i];
    }
    return pow(product,(1.0/num));
}

float highest_num(float arr[], int num){
    float max=arr[0];
    for(int i=0; i<num; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

float smallest_num(float arr[], int num){
    float min=arr[0];
    for(int i=0; i<num; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

float sum(float arr[], int num){
    float sum=0;
    for(int i=0; i<num; i++){
        sum+=arr[i];
    }
    return sum;
}


int main() {


    float arr[15];
    int count = 0;
    printf("Enter the floats:");
    for(int i=0; i<=15; i++) {
        scanf("%f",&arr[i]);
        count++; //to count the numbers
        if(arr[i]<0){
            printf("Enter a positive number!\n");
            break;
        }
    }

    char c;
    printf("Enter the character:");
    scanf(" %c",&c);

    switch (c) {
        case 'm' : printf("The geometric mean of the array is %f\n",geometric_mean(arr, count));
        break;

        case 'h' : printf("The highest number in the array is %f\n",highest_num(arr, count));
        break;

        case 'l' : printf("The smallest number in the array is %f\n",smallest_num(arr, count));
        break;

        case 's' : printf("The sum of the array is %f\n",sum(arr,count));
        break;
        
        default : printf("Enter a valid character\n");
        break;
    }


}



