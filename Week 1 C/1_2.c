#include <stdio.h>
int main() {
int result; /*The result of our calculations*/

result=(2+7)* 9/3; 
printf("The result is %d\n",result);
return 0;
}

/*
printing random values as in the original code we didnt specify what integer value we want to 
print in the printf function. To fix this issue, I added the result variable in the printf function.
*/