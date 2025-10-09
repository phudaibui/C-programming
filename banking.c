#include <stdio.h>
#include <stdbool.h>
void display();
float bankAccount(float balance);

int main() {
    int choice = 0;
    float withdraw = 0.0f;
    float deposit = 0.0f;
    while (true)
    {
        float balance = bankAccount(balance);
        printf("Select an option \n\n");
        display();
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        getchar();
        if (choice == 4){
            break;
        } 
        else if (choice == 1){
            printf("You have $%.2f in your account \n", balance);;
        }
        else if (choice == 2){
            printf("Enter the amount of deposit: ");
            scanf("%f", &deposit);
            balance += deposit;
            // bankAccount(balance);
        }
        else if (choice == 3)
        {
            printf("Enter the amount of money you want to withdraw: ");
            scanf("%f", &withdraw);
            balance -= withdraw;
            // bankAccount(balance);
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

float bankAccount(float balance) {
    float balance = {0.0f};
    return balance;
}