#include <stdio.h>

int main() {

    const int maxRows = 30;
    const int maxCols = 30;

    int n;
    printf("Enter the number of n:");
    scanf("%d",&n);

    if(n<1 || n>maxCols || n>maxRows){
        printf("Invalid number of rows and columns!\n");
    }


    int mat[30][30];

    for(int i=0; i<n; i++){//row
        for(int j=0; j<n; j++){//column
            scanf("%d",&mat[i][j]);
        }
    }

    //printing the matrix:
    printf("The entered matrix is:\n");

     for(int i=0; i<n; i++){//row
        for(int j=0; j<n; j++){//column
            printf("%d",mat[i][j]);
        }
        printf("\n");
    }

    printf("Under the main diagonal\n");

    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            printf("%d ",mat[i][j]);
        }
    }

    return 0;
    

}