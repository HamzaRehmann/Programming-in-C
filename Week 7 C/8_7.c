#include <stdio.h>
#define MAX_LINE_LENGTH 1000

int main(){

    FILE *f1,*f2,*f3;
    char line1[MAX_LINE_LENGTH], line2[MAX_LINE_LENGTH];

    f1= fopen("text1.txt", "r");
    if(f1==NULL){
        printf("File is empty!");
        return 1;
    }

    f2 = fopen("text2.txt", "r");
    if(f2==NULL){
        printf("File is empty!");
        return 1;
    }

    f3 = fopen("merge12.txt", "w");

    while(fgets(line1, sizeof(line1), f1)!=NULL && fgets(line2, sizeof(line2),f2)!=NULL){
        fputs(line1, f3);
        fputs(line2,f3);
    } 

    //checking for a corner case when one file might be longer than the other;

    while(fgets(line1,sizeof(line1),f1)!=NULL){
        fputs(line1,f3);
    }

     while(fgets(line2,sizeof(line2),f2)!=NULL){
        fputs(line2,f3);
    }

    fclose(f1);
    fclose(f2);
    fclose(f3);

    return 0;

}