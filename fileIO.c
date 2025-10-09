#include <stdio.h>

int main() {

    // Write a file
/*
    FILE *pFile = fopen("output.txt", "w");
    
    char text[] = "I AM PHU"; 

    if (pFile == NULL) {
        printf("Error opening file\n");
        return 1; // There's an error
    }
    fprintf(pFile, "%s", text);
    printf("File was written succesfully!");
    fclose(pFile);
*/
    // Read a file
    FILE *pFile = fopen("output.txt", "r");
    char buffer[1024] = {0}; 
    if (pFile == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    while (fgets(buffer, sizeof(buffer), pFile))
    {
        printf("%s", buffer);
    }
    
    fclose(pFile);

    return 0;
}