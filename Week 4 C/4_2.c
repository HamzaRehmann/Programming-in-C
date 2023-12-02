#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    int i;
    int j=0;
    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1] = '\0'; //to remove the new line added by fgets

    for(int i=0; i<=strlen(str); i++) {
        if(j%2==0){
            printf("%c\n",str[i]);
        }
        else {
            printf(" %c\n",str[i]); //printing the with space
        }
        j++;
    } 

    return 0;



}