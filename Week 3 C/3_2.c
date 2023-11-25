#include <stdio.h>

int main() {

    char ch;
    printf("Enter the lowercase character:\n");
    scanf(" %c",&ch);
    int n;
    printf("Enter the integer\n");
    scanf("%d",&n);

    for(int i = 0; i<n; i++){
        printf("%c\n",ch-i );
    }

    return 0;

}