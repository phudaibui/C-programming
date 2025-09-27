#include <stdio.h>
#include <string.h>

int main() {
    char name[30] = "";
    int quant = 0;
    char currency = '$';
    float price = 0.0f;
    float total_cost = 0.0f;
   
    printf("What item would you like to buy? ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';


    printf("What is the price for each? ");
    scanf("%f", &price);

    printf("How many would you like? "); 
    scanf("%d", &quant); 

    total_cost = price * quant;
    printf("--- \n");
    printf("you have bought %d %s/s \n", quant, name);
    printf("Your total is %.2f %c", total_cost, currency);

}