#include <stdio.h>


int position(char str[], char c)
{
    int idx;
    /* Loop until end of string */
    for (idx = 0; str[idx] != '\0'; ++idx) {
        if(str[idx] == c) {
            return idx;
        }
    }
    return -1;
}
int main() {
    char line[80];
    while (1) {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("The first occurrence of g is: %d\n", position(line, 'g'));
        
} 



}
