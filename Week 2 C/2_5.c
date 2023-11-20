#include <stdio.h>

int main() {

    int a;
    printf("Enter a:");
    scanf("%d",&a);

    printf("a =% d\n",a);

    int *ptr_a = &a;
    printf("Address = %p\n",ptr_a);

    int value_change = *ptr_a + 5;
    printf("Modified value = %d\n",value_change);
    printf("Address = %p\n",ptr_a);

    return 0;

}