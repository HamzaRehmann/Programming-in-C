#include <stdio.h>

int main() {
    int n;

    do {
        printf("Enter a valid integer: ");
        scanf("%d", &n);
    } while (n <= 0);

    for (int i = 1; i <= n; i++) {
        printf("%d day = %d hours\n", i, i * 24);
    }

    return 0;
}
