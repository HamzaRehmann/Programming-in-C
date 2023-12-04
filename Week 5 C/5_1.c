#include <stdio.h>

void trichars(int n, char ch){
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i-1;j--){
            printf("%c",ch);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the integer n:");
    scanf("%d",&n);
    getchar();
    char c;
    printf("Enter the character:");
    scanf("%c",&c);

    trichars(n,c);

    return 0;

}