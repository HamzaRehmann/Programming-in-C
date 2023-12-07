#include <stdio.h>
#include <stdlib.h>

#define SWAP_NUM(A, B, data_type) \
  do { \
    data_type temp = A; \
    A = B; \
    B = temp; \
  } while (0)

int main() {
    printf("Enter two integers:");
    int n, w;
    scanf("%d", &n);
    scanf("%d", &w);

    printf("Enter two doubles:");
    double x, y;
    scanf("%lf", &x);
    scanf("%lf", &y);

    SWAP_NUM(n, w, int);
    SWAP_NUM(x, y, double);

    printf("After swapping:\n");
    printf("%d\n", n);
    printf("%d\n", w);
    printf("%lf\n", x);
    printf("%lf\n", y);

    return 0;
} 