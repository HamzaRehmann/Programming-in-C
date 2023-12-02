#include <stdio.h>
#include <stdlib.h>

int greatest_val(int arr[], int n) {
    int max1=arr[0];
    int max2=arr[1];
    int temp;

    if(max1<max2){ //if max1 is smaller than max2 then we swap the values
        max1 = temp;
        max1 = max2;
        max2=temp;
    }
    
    for(int i=0; i<n; i++ ){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2){
            max2=arr[i];
        }
    }
    printf("The two greatest values are %d and %d\n",max1,max2);

    return 0;

}

int main() {

    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);

    int *arr = (int *)calloc(n,sizeof(int));

    if(arr==NULL) {
        printf("Memory allocation has failed!");
        return 1; //exists the program
    }

    printf("Enter the array elements:");

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    greatest_val(arr, n);

    free(arr);

    return 0;


}