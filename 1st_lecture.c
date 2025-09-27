#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {

    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    printf("Enter the operator(+, -, *, /): ");
    scanf(" %c", &operator);
    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/': 
        if (num2 == 0) {
            printf("You can devide by zero");
        }
        else {
            result = num1 / num2;
        }
        break;
    default:
        printf("Please enter a valid character");
        break;
    }
    printf("Result: %.3f", result);
}