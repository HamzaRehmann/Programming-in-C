#include <stdio.h>
#include <string.h>

void checkifpresent(char arr[], char c);

int main() {
    char one[100];
    char two[100];
    printf("Enter one:");
    fgets(one,100,stdin);
    printf("Enter two:");
    fgets(two,100,stdin);

    int length1 = strlen(one);
    printf("length1=%d\n",length1);
    int length2 = strlen(two);
    printf("length2=%d\n",length2);

    strcat(one,two);
    printf("concatenation=%s",one);

    char third[100];
    strcpy(third,two);
    printf("copy=%s\n",third);

    int comparision = strcmp(two,one);
    if(comparision>0) {
        printf("one is smaller than two\n");
    }
    else {
        printf("two is smaller than one\n");
    }

    char c;
    printf("Enter c:");
    scanf(" %c",&c);
    checkifpresent(two,c);


}

void checkifpresent(char arr[], char c) {
    for(int i=0; arr[i]!= '\0'; i++) {
        if(arr[i]==c){
            printf("position=%d\n",i);
            break;
        }
    }
}