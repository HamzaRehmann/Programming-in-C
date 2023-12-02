#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int countinsensitive(char *str, char c) {
    int count = 0;
    char *ptr;
    for(ptr = str; *ptr!='\0'; ptr++){
        if(tolower(*ptr) == tolower(c)){
            count++;
        }   
    }
    return count;

}

int main() {

    char c;
    printf("Enter the character:");
    scanf(" %c",&c);
    getchar();

    char *arr = (char *) calloc(50,sizeof(char));

    if(arr==NULL){
        printf("Memory allocation failed!");
        return 1;
    }

    printf("Enter the string:");

    fgets(arr,50,stdin);

    char *arr1 = (char *) calloc(60,sizeof(char));

    if(arr1==NULL){
        printf("Memory allocation failed!");
        return 1;
    }
    strcpy(arr1,arr);
    free(arr);

    printf("The character `%c` occurs %d times.\n",c,countinsensitive(arr1,c));

    free(arr1);

    return 0;


}