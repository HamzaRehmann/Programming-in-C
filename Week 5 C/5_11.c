#include <stdio.h>

int primenum(int x, int divisor) {
    if (x <= 1) {
        return 0; //base
    }

    if (divisor * divisor > x) {
        return 1; //is prime
    }

    if (x % divisor == 0) {
        return 0; //not prime 
    }

    return primenum(x, divisor + 1);
}

int main() {
    int x;
    printf("Enter x: ");
    scanf("%d", &x);

    if (primenum(x, 2)) {
        printf("%d is prime\n", x);
    } else {
        printf("%d is not prime\n", x);
    }

    return 0;
}
