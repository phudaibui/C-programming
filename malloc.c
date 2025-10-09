#include <stdio.h>
#include <stdlib.h>
int main() {
    // malloc = A function in C that dynamically allocates 
    //          a specified number of bytes in memory

    char grade[5] = {0}; // fixed size

    int number = 0;
    printf("Enter the number of grades: ");
    scanf("%d", &number);
    char *grades = malloc(number * sizeof(char));
    if (grades == NULL) {
        printf("Memory allocation failed \n");
        return 1;
    }
    for (int i = 0; i < number; i++) {
        printf("Enter grade #%d: ", i + 1);
        scanf(" %c", &grade[i]);
    }
    for (int i = 0; i < number; i++) {
        printf("%c \n", grade[i]);
    }

    free(grades); // returning "rented" space back to the operating system 
    grades = NULL; // avoid dangling pointers(unexisting momory)  
    return 0;
}