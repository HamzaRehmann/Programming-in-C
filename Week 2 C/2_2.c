#include <stdio.h>

int main() {

    char c;
    printf("Enter char: ");
    scanf(" %c",&c);

    printf("Character=%c\n",c);
    printf("Decimal=%d\n",c);
    printf("Octal=%o\n",c);
    printf("Hexadecimal=%x\n",c);

    return 0;

}