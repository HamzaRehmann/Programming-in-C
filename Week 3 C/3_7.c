#include <stdio.h>

void print_form(int n, int m, char c);

int main() {

    int n,m;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter m:");
    scanf("%d",&m);
    char c;
    printf("Enter c:");
    scanf(" %c",&c);
    printf("Pattern:\n");

    print_form(n,m,c);

}

void print_form(int n, int m, char c) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i+m-1; j++){
            printf("%c",c);
        }
    printf("\n");
    }

}