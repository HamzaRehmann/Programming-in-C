#include <stdio.h>

int main() {
    float x;
    printf("Enter the float:");
    scanf("%f", &x);

    int n;
    do {
        printf("Enter the integer:");
        scanf("%d", &n);

        if (n <= 0) {
            printf("Input is invalid, reenter value\n");
        }
    } while (n <= 0);

    int i = 0;
    while (i < n) {
        printf("%f\n", x);
        i++;
    }

    return 0;
}
