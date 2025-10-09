#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

char *choice_converter(int choice);

int main() {
    srand(time(NULL));
    int min = 1;
    int max = 3;
    // int computer_choice = (rand() % (max - min + 1)) + min;
    int user_choice = 0;
    int computer_choice = (rand() % (max - min + 1)) + min;
    printf("****ROCK-PAPER-SCISSOR**** \n");
    while (true)
    {
        int computer_choice = (rand() % (max - min + 1)) + min;
        printf("1. ROCK \n");
        printf("2. PAPER \n");
        printf("3. SCISSOR \n");
        printf("Please choose an option(1 - 3): ");
        scanf("%d", &user_choice); 
        // char *user[20] = choice_converter(user_choice);
        // char *computer[20] = choice_converter(computer_choice);
        if (user_choice != 1 && user_choice != 2 && user_choice != 3){
            printf("Please enter a valid number(1 - 3) \n");
            continue;
        }
        if ((computer_choice == 2 && user_choice == 1) || (computer_choice == 1 && user_choice == 3) || (computer_choice == 3 && user_choice == 2)){
            printf("You are losed \n");
            printf("You choose %s \n", choice_converter(user_choice));
            printf("Computer choose %s \n", choice_converter(computer_choice));
            break;
        }
        else if (computer_choice == user_choice){
            printf("It's a TIE\n");
        }
        else {
            printf("You are win \n");
            printf("You choose %s\n", choice_converter(user_choice));
            printf("Computer choose %s\n", choice_converter(computer_choice));
            break;
        }        
    }
}

char *choice_converter(int choice) {
    if (choice == 1){
        return "ROCK";
    }
    else if (choice == 2){
        return "PAPER";
    }
    else if (choice == 3){
        return "SCISSOR";
    }
}

