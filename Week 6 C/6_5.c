#include <stdio.h>
#include <stdlib.h>

int main() {

    unsigned char c;
    printf("Enter the character:");
    scanf("%c",&c);

    printf("The decimal representation is: %u\n",c);
    printf("The backwards binary representation is: ");
    while(c){
        if(((c&1))){
            printf("1");
        }
        else {
            printf("0");
        }
        c >>=1; //right shift

    }

    return 0;
}