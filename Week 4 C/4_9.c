#include <stdio.h>
#include <stdlib.h>

int prodminmax(int arr[], int n) {
    int max=arr[0];
    int min=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
        else if (arr[i]<min) {
            min = arr[i];
        }   
    }
    return min*max;
}

int main() {
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    int *arr= (int *) calloc(n,sizeof(int));

    if(arr==NULL){
        printf("Memory allocation failed!");
        return 1;
    }

    printf("Enter the elements:");

    for(int i =0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("The product of the smallest and largest elements is: %d\n",prodminmax(arr, n));

    free(arr);

    return 0;

}