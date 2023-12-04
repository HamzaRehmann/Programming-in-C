#include <stdio.h>
#include <string.h>

int count_lower(char* str){
    char *ptr;
    int count=0;
    for(ptr=str;*ptr!='\0';ptr++){
        if(*ptr>='a' && *ptr<='z'){
            count++;
        }
    }

    return count;

}

int main(){

    char str[50];
    while(1){
        printf("Enter the string:");
        fgets(str,sizeof(str),stdin);
        size_t length = strlen(str);
        if(length>0 && str[length-1]=='\n'){
            str[length-1]='\0';
        }
        if(strlen(str)==0){
            printf("Empty string is entered! Ending the program.");
            break;
        }

        printf("Number of lowercase characters:%d\n",count_lower(str));
    }

    return 0;

}