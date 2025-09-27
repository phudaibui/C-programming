#include <stdio.h> 
#include <string.h>
#define printfln(str, ...) printf(str "\n", __VA_ARGS__)

int main() {

    float gpa = 0.0f; 
    int age = 0;
    char grade = '\0';
    char name[30] = "";

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gpa: ");
    scanf("%f", &gpa);
    getchar();

    printf("Enter your grade: ");
    scanf("%c", &grade);
    getchar();

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("--- \n");

    printfln("Your gpa is: %.1f", gpa);
    printfln("You are %d years old", age);
    printfln("Your grade is %c", grade);
    printfln("Your full name is %s", name);
    printf("You are great");
}