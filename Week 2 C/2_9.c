#include <stdio.h>

int main() {

    char c;
    printf("Enter the character:");
    scanf(" %c",&c);

    if(c>='0' && c<='9') {
        printf("%c is a digit\n",c);
    }
    else if ((c>='a' && c<='z') || (c>='A' && c<='Z')) {

        printf("%c is a letter\n",c);
    }

    else {
        printf("%c is some other symbol\n",c);
    }

    return 0;

}