#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[100];
    char str1[100];
    printf("Enter first string:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Enter the second string:");
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1, "\n")] = '\0';
    strcat(str,str1);
    int len = strlen(str);
    
    char *st = (char *) calloc(len,sizeof(char));

    strcpy(st,str);

    printf("Result of concatenation: %s\n",st);



}