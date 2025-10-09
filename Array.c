#include <stdio.h>
#include <string.h>
#include <stdbool.h>
void display_ques(char ques[]);
void display_aws(char answer[]);
bool check_ans(char choice, int turn);
int main() {
/*

    int numbers[] = {10, 20, 30, 40};
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    numbers[0] = 100;
    grades[1] = 'G';

    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("%d \n", size);
    printf("%d \n", numbers[0]);
    printf("%c \n", grades[1]);

    for (int i = 0; i < 4; i++) {
        printf("%d ", numbers[i]);
        printf("%c ", grades[i]);
    }
    return 0;
*/
/*  
    int scores[5] = {0};
    for (int i = 0; i < 5; i++){
        printf("Enter a score: ");
        scanf("%d", &scores[i]);
    }

   for (int i = 0; i < 5; i ++) {
        printf("%d ", scores[i]);
   }
   
    return 0; 
*/
/*   
    int numbers[][3] = {{'1', '2', '3'},
                        {'4', '5', '6'},
                        {'7', '8', '9'}, 
                        {'*', '0', '#'}};
    for (int i = 0; i < 4; i++) {
        for (int k = 0; k < 3; k++){
            printf("%c ", numbers[i][k]);
        }
        printf("\n");
    }
*/
/*
    char names[3][25] = {0}; 
    int size = sizeof(names) / 25;
    for (int i = 0; i < size; i++){
        printf("Enter a name: ");
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strlen(names[i]) - 1] = '\0';
    }

    for (int i = 0; i < size; i++) {
        printf("%s ", names[i]);
    }
*/
    char question[][100] = {"Which of these is the most visited attraction in the world?\n",
                            "What is the only food that cannot go bad?\n",
                            "How many Infinity Stones are there?\n",
                            "What 90s boy band member bought Myspace in 2011?\n"};
    char answer[][200] = {"A.Effel Tower\nB.Statue of Liberty\nC.Forbidden City\nD.Colloseum\n",
                          "A.Dark Chocolate\nB.Peanut Butter\nC.Canned Tuna\nD.Honey\n",
                          "A.3\nB.5\nC.6\nD.10\n",
                          "A.Nick Lachey\nB.Justin Timberlake\nC.Shawn Stockman\nD.Aj McLean\n"};
    char choice = '\0';
    int size = 4;
    int total = 0;
    printf("***QUIZ GAME***\n");
    for (int i = 0; i < size; i++){
        display_ques(question[i]);
        display_aws(answer[i]);
        printf("Enter your choice: ");
        scanf(" %c", &choice);
        if (check_ans(choice, i)){
            total += 1;
        }
    }
    printf("----------------------\n");
    printf("Your number of correct answers are: %d", total);
    return 0;
}
void display_ques(char ques[]) {
    printf("%s", ques);
    }                   
void display_aws(char answer[]){
    printf("%s", answer);
}
bool check_ans(char choice, int turn){
   
    switch (turn)
    {
    case 0:
        (choice == 'C' || choice == 'c') ? true : false; 
        break;
    case 1: 
        (choice == 'D' || choice == 'c') ? true : false; 
        break;
    case 2: 
        (choice == 'C' || choice == 'c') ? true : false; 
        break;
    case 3: 
        (choice == 'B' || choice == 'b') ? true : false; 
        break;
    default:
        return false;
        break;
    }
}