#include <stdio.h>
#include <stdlib.h> 

double scalar_product(double v[], double w[],int n){
    double scalarproduct=0;
    for(int i=0; i<n; i++){
        scalarproduct+= v[i]* w[i];
    }
    return scalarproduct;
}

double smallest(double a[],int n){
    double small=a[0];
    for(int i=0; i<n;i++){
        if(a[i]<small){
            small=a[i];
        }
    }

    return small;
}

int smallest_pos(double a[],int n){
    double small=a[0];
    int position = 0;
    for(int i=0; i<n;i++){
        if(a[i]<small){
            small=a[i];
            position =i;
        }
    }

    return position;
}

double largest(double a[],int n){
    double large= a[0];
    for(int i=0; i<n; i++){
        if(a[i]>large){
            large = a[i];
        }
    }

    return large;

}

int largest_pos(double a[],int n){
    double large= a[0];
    int position = 0;
    for(int i=0; i<n; i++){
        if(a[i]>large){
            large = a[i];
            position = i;
        }
    }

    return position;

}

int main() {
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    double *v = (double *) calloc(n,sizeof(double));

    if(v==NULL){
        printf("Memory allocation failed!");
    }

    double *w = (double *) calloc(n,sizeof(double));

    if(w==NULL){
        printf("Memory allocation failed!");
    }


    printf("Enter vector v components:");

    //reading vector v
    for(int i=0; i<n;i++){
        scanf("%lf",&v[i]);
    }

    printf("Enter vector w components:");

    //reading vector w
    for(int i=0; i<n;i++){
        scanf("%lf",&w[i]);
    }

    printf("Scalar product=%lf\n",scalar_product(v,w,n));
    printf("The smallest = %lf\n",smallest(v,n));
    printf("Position of smallest = %d\n",smallest_pos(v,n));
    printf("The largest = %lf\n",largest(v,n));
    printf("Position of largest = %d\n",largest_pos(v,n));
    printf("The smallest = %lf\n",smallest(w,n));
    printf("Position of smallest = %d\n",smallest_pos(w,n));
    printf("The largest = %lf\n",largest(w,n));
    printf("Position of largest = %d\n",largest_pos(w,n));

    free(v);
    free(w);


    return 0;


}