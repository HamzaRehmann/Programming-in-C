#include <stdio.h>


int main(){
    FILE *f1,*f2;

    char first_file[100];
    printf("Enter the name of first file:");
    scanf("%s",first_file);
    char second_file[100];
    printf("Enter the name of the second file:");
    scanf(" %s",second_file);

    f1 = fopen(first_file,"r");
    if(f1==NULL){
        printf("File 1 is empty!");
        return 1;
    }

    f2 = fopen(second_file, "r");
    if(f2==NULL){
        printf("File 2 is empty!");
        return 1;
    }
    double c,d;

    fscanf(f1, "%lf", &c);
    fscanf(f2, "%lf", &d);

    double sum = c + d;
    double difference = c - d;
    double product = c * d;
    double division = c/d;

    FILE *f3;
    f3 = fopen("results.txt", "w");
    fprintf(f3, "sum = %lf\n", sum);
    fprintf(f3, "difference = %lf\n",difference);
    fprintf(f3, "product = %lf\n", product);
    fprintf(f3, "division = %lf\n", division);

    fclose(f1);
    fclose(f2);
    fclose(f3);

    return 0;
}