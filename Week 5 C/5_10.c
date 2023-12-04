#include <stdio.h>

void numbers_counting_down(int n){
    if(n<=0){
        return;
    }
    printf("%d\n",n);
    numbers_counting_down(n-1);

}

int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    numbers_counting_down(n);
 
    return 0;

}