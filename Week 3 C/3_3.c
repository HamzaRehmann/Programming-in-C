#include <stdio.h>

//prototyping the function
float convert(int cm);

int main() {

    int cm;
    printf("Enter the value:");
    scanf("%d",&cm);

    printf("Converted value:%f\n",convert(cm));

}

//converts cm to km
float convert(int cm) {
    return cm/100000.0;
}