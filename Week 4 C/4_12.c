#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void replaceAll(char *str, char c, char e) {
    char *ptr;
    for (ptr = str; *ptr != '\0'; ptr++) {
        if (*ptr == c) {
            *ptr = e;
        }
    }
}

int main() {
    char arr[80]; 

    while (1) {
        printf("Enter the string: ");
        scanf("%s", arr); 
        getchar(); 

        if (strcmp(arr, "stop") == 0) {
            break;
        }

        printf("Before the replacement:\n");
        char c, e;
        printf("Enter the character to be replaced: ");
        scanf(" %c", &c);
        printf("The character to be replaced: %c\n", c);

        printf("Enter the replacing character: ");
        getchar(); 
        scanf(" %c", &e);
        printf("The replacing character is: %c\n", e);

        printf("the string before replacement: %s\n", arr);

        replaceAll(arr, c, e);

        printf("After the replacement:\n");
        printf("the string after replacement: %s\n", arr);
    }

    return 0;
}
