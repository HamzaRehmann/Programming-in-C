#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 1000

int main(){

    FILE *f1;
    char file[MAX_LINE_LENGTH];
    printf("Enter the file name:");
    scanf("%s",file);
    f1 = fopen(file, "r");
    if(f1==NULL){
        printf("File is empty!");
        return 1;
    }
    int count =0;
    
    while (fgets(file, sizeof(file), f1) != NULL) {
        char *token = strtok(file, " ,?!.\t\r\n");
        while (token != NULL) {
            if (strlen(token) > 0) {
                count++;
            }
            token = strtok(NULL, " ,?!.\t\r\n");
        }
    }

    printf("The file contains %d words.\n",count);

    return 0;
}







