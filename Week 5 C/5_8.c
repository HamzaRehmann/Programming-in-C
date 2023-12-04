#include <stdio.h>
#include <stdlib.h>

void readmatrix(int **a,int b,int c){
    for(int i=0; i<b;i++){
        for(int j=0; j<c; j++){
            scanf("%d",&a[i][j]);
        }
    }
}

void matprint(int **a, int b, int c){
    for(int i=0; i<b;i++){
        for(int j=0; j<c; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

void matproduct(int **a, int **b, int **c, int n, int m, int p){
    for(int i=0;i<n;i++){
        for(int j=0; j<p;j++){
            c[i][j]=0;
            for(int k=0; k<m;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }}}}


int main(){
    int n,m,p;
    printf("Enter the dimensions:");
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&p);

    //first matrix
    int **matA = (int**) calloc(n,sizeof(int));
    if(matA==NULL){
        printf("Memory allocation failed!");
        return 1; //program exists ):
    }

    for(int i =0; i<n; i++){
        matA[i] = (int*)calloc(m,sizeof(int));
        if(matA[i]==NULL){
            printf("Memory allocation failed");
            return 1;
        }
    }

    //second matrix
    int **matB = (int**) calloc(m,sizeof(int));
    if(matB==NULL){
        printf("Memory allocation failed!");
        return 1; //program exists ):
    }

    for(int i =0; i<m; i++){
        matB[i] = (int*)calloc(p,sizeof(int));
        if(matB[i]==NULL){
            printf("Memory allocation failed");
            return 1;
        }
    }

    //product matrix
    int **matC = (int**) calloc(n,sizeof(int));
    if(matC==NULL){
        printf("Memory allocation failed!");
        return 1; //program exists ):
    }

    for(int i =0; i<n; i++){
        matC[i] = (int*)calloc(p,sizeof(int));
        if(matC[i]==NULL){
            printf("Memory allocation failed");
            return 1;
        }
    }

    printf("Enter the elements of first matrix:");
    readmatrix(matA,n,m);
    printf("Enter the elements of Second matrix:");
    readmatrix(matB,m,p);
    printf("Matrix A:\n");
    matprint(matA,n,m);
    printf("\n");
    printf("Matrix B:\n");
    matprint(matB,m,p);
    printf("\n");
    printf("The multiplication result AxB:\n");
    matproduct(matA,matB,matC,n,m,p);
    matprint(matC,n,p);


    for(int i=0;i<n;i++){
        free(matA[i]);
    }
    free(matA);

    for(int i=0; i<m;i++){
        free(matB[i]);
    }
    free(matB);

    for(int i=0; i<p; i++){
        free(matC[i]);
    }
    free(matC);

    return 0;

}