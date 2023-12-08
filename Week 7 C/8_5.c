#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("chars.txt", "r");

    if(fptr==NULL){
        printf("File is empty!");
        return 1;
    }

    char a,b;   
    rewind(fptr);    
    fscanf(fptr," %c",&a);
    fscanf(fptr," %c",&b);

    int ascii1 = (int)a;
    int ascii2 = (int)b;

    FILE *fptr1;
    fptr1 = fopen("codesun.txt","w");
    fprintf(fptr1, "%d", ascii1 + ascii2);
    
    fclose(fptr);
    fclose(fptr1);

    return 0;
}

