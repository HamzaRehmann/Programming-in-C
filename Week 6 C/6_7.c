#include <stdio.h>

unsigned char set3bits(unsigned char a, int n, int b, int d){
    unsigned char m1 = 1<<n;
    unsigned char m2 = 1<<b;
    unsigned char m3 = 1<<d;

    a|=m1;
    a|=m2;
    a|=m3;

    return a;

}

int main(){
    unsigned char c;
    printf("Enter the character:");
    scanf("%c",&c);
    int x,y,z;
    printf("Enter the bits:");
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);


    printf("The decimal repressentation is: %u\n",c);

    printf("The binary representation is: ");
    for(int i=7; i>=0; i-- ){
        if(c&(1<<i)){
            printf("1");
        }
        else {
            printf("0");
        }
    }
    printf("\n");

    c = set3bits(c,x,y,z);

    printf("After setting the bits: ");
    for(int i=7; i>=0; i--){
        if(c&(1<<i)){
            printf("1");
        }
        else {
            printf("0");
        }
    }
    printf("\n");

    return 0;


}