#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE_READ 1
#define BUFFER_SIZE_WRITE 64
#define MAX_FILENAME_LENGTH 1000

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
     while (getchar() != '\n');

    char filenames[n][MAX_FILENAME_LENGTH];
    FILE *file_pointers[n];


    for (int i = 0; i < n; i++) {
        printf("Enter the name of file %d: ", i + 1);
        fgets(filenames[i], sizeof(filenames[i]), stdin);
        
        if (filenames[i][strlen(filenames[i]) - 1] == '\n') {
            filenames[i][strlen(filenames[i]) - 1] = '\0';
        }

        file_pointers[i] = fopen(filenames[i], "rb");
        if (file_pointers[i] == NULL) {
            printf("Error opening file");
            return 1;
        }
    }


    FILE *outputFile = fopen("output.txt", "wb");
    
    fprintf(outputFile,"Concating the content of %d files ...\n",n);

    for (int i = 0; i < n; i++) {
        char buffer[BUFFER_SIZE_WRITE];
        size_t bytesRead;

        while ((bytesRead = fread(buffer, 1, BUFFER_SIZE_READ, file_pointers[i])) > 0) {
            fwrite(buffer, 1, bytesRead, outputFile);
        }
        
        fwrite("\n", 1, 1, outputFile); 

        fclose(file_pointers[i]);
    }
    
    fprintf(outputFile,"The result was written into output.txt\n");

    fclose(outputFile);

    return 0;
}
