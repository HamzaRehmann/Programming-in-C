#include <stdio.h>
#include <stdlib.h>

#define LSB(n) ((n)&1)

int main(){

    unsigned char c;
    printf("Enter the unsigned char:");
    scanf("%c",&c);

    printf("The decimal representation is: %u\n",c);

    if(LSB(c)){
        printf("The least significant bit is: 1\n");
    }
    else {
        printf("The least significant bit is: 0\n");
    }

    return 0;


}