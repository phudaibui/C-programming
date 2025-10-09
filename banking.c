#include <stdio.h>
#include <stdbool.h>
void display();
int writeToFile(float balance);
float readFromFile();
int main() {
    int choice = 0;
    float withdraw = 0.0f;
    float deposit = 0.0f;
    float balance = readFromFile();
    while (true)
    {
        printf("Select an option \n\n");
        display();
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        getchar();

        if (choice == 4){
            break;
        } 
        else if (choice == 1){
            printf("You have $%.2f in your account \n", balance);
        }
        else if (choice == 2){
            printf("Enter the amount of deposit: ");
            scanf("%f", &deposit);
            balance += deposit;
            writeToFile(balance);
        }
        else if (choice == 3)
        {
            printf("Enter the amount of money you want to withdraw: ");
            scanf("%f", &withdraw);
            balance -= withdraw;
            writeToFile(balance);
        }
        else{
            printf("Invalid input\n");
        }
    }   
    return 0;
}

void display() {
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit \n");
}
int writeToFile(float balance){
    FILE *pFile = fopen("banking.txt", "w"); 
    float insert = balance;
    if (pFile == NULL) {
        printf("Error openning file\n");
            return 1;
        }
    fprintf(pFile, "%.2f", insert);
    fclose(pFile);
}
float readFromFile() {
    FILE* pFile = fopen("banking.txt", "r");
    float balance = 0.0f;
    if (pFile == NULL) {
        printf("Cannot open the file\n");
        return 0.0f;
    }
    fscanf(pFile, "%f", &balance);
    fclose(pFile);
    return balance;
}