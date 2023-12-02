#include <stdio.h>
#include <string.h>

int count_consonants(char *str) {
    int count=0;
    char *ptr;
    for(ptr = str; *ptr!='\0';ptr++){
        if((*ptr>='A' && *ptr<='Z') || (*ptr>='a' && *ptr<='z')){
            if(*ptr != 'A' && *ptr != 'E' && *ptr != 'I' && *ptr != 'O' && *ptr != 'U' &&
            *ptr != 'a' && *ptr != 'e' && *ptr != 'i' && *ptr != 'o' && *ptr != 'u'){
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