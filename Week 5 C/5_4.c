#include <stdio.h>
#include <stdlib.h>

void divby5(float arr[], int size){
    for(int i=0; i<size;i++){
        arr[i]/=5.0;
    }
}

int main() {
    // float arr[]={5.5 ,6.5 ,7.75 ,8.0 ,9.6 ,10.36};
    // int size= sizeof(arr)/sizeof(arr[0]); 
    int n;
    printf("Enter integer n:");
    scanf("%d",&n);
    
    float *arr= (float *) calloc(n,sizeof(float));
    printf("Enter your array elements:");
    for(int j=0; j<n; j++){
        scanf("%f",&arr[j]);
    }

    printf("Before:\n");
    for(int i=0;i<n;i++){
        printf("%.3f ",arr[i]);
    }
    printf("\nAfter:\n");

    divby5(arr,n);

    for(int i=0;i<n;i++){
        printf("%.3f ",arr[i]);
    }

    free(arr);

    return 0;

   
}