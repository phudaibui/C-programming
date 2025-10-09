#include <stdio.h>
#include <string.h>
#include <unistd.h> 
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int main() {    
    srand(time(NULL));

    bool state = true;
    int min = 1;
    int max = 100;
    int guess = 0;

    int randint = (rand() % (max - min + 1)) + min;

    printf("Guess a number between 1 - 100: ");
    scanf("%d", &guess);

    while (guess != randint) {
        if (guess > randint) {
            printf("TOO HIGH!\n");
        }
        else if (guess < randint) {
            printf("TOO LOW!\n");
        }
        printf("The number is wrong, please guess again: ");
        scanf(" %d", &guess);
    } 

    printf("%d is the number, congratulation!", guess);
}