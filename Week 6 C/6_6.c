#include <stdio.h>

int main() {

    unsigned char c;
    printf("Enter the character:");
    scanf("%c",&c);

    printf("The decimal representation is: %u\n",c);

    printf("The binary representation is: \n");
    for (int i = 7; i >= 0; i--) {
        if (c & (1 << i)) {
        printf("1");
    }   else {
        printf("0");
    }
}


    return 0;

}