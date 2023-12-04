#include <stdio.h>

int main(){

    int n;
    printf("Enter the length of the array:");
    scanf("%d",&n);
    float arr[n];
    printf("Enter the array elements:");
    for(int i=0; i<n; i++){
        scanf("%f",&arr[i]);
    }
    float *ptr;
    for(ptr=arr; ptr<arr+n; ptr++){
        if(*ptr<0){
            printf("Before the first negative value: %ld elements\n",ptr-arr);
            break;
        }
    }

    return 0;

}

