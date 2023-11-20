#include <stdio.h>

int main() {

    int a;
    printf("Enter the number:");
    scanf("%d",&a);

    if(a%2==0 && a%7==0) {
        printf("The number is divisible by 2 and 7");
    }
    else
    {
        printf("The number is NOT divisible by 2 and 7");
    }

    return 0;

}