#include <stdio.h> 
#include <string.h>
#define printfln(str, ...) printf(str "\n", __VA_ARGS__)
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    int min = 50;
    int max = 100;

    int randomNum1 = (rand() % (max - min + 1)) + min;
    int randomNum2 = (rand() % (max - min + 1)) + min;
    int randomNum3 = (rand() % (max - min + 1)) + min;

    printf("%d \n", randomNum1);
    printf("%d \n", randomNum2);
    printf("%d \n", randomNum3);

    return 0;

}