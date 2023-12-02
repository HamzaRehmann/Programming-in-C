#include <stddef.h>
#include <stdio.h>
#include <string.h>

int count_consonants(char str[]){
    int count=0;
    for(int i=0; i<strlen(str);i++){
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')){
            if(str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U' &&
            str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u'){
                count++;
            }
        }

    }

    return count;

}

int main() {

    char str[100];
    while(1){
        printf("Enter the string:");
        fgets(str,sizeof(str),stdin);

        size_t length = strlen(str);
        if(length>0 && str[length-1]=='\n'){ //ends the program if empty string is entered
            str[length-1]='\0';
        }
        
        if((strlen(str)==0)){
            printf("Empty string entered! Ima head out ):\n");
            break;
        }       

        printf("Number of consonants=%d\n",count_consonants(str));
    }

    return 0;

}