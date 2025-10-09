#include <stdio.h>

typedef struct 
{
    char name[50];
    int year;
    int price;
}Car;

int main(){
    Car car[] = {{"Mustang", 2025, 700000}, {"Covette", 2024, 690000}, {"Challenger", 2027, 800000}};
    
    int size = sizeof(car) / sizeof(car[0]);

    for (int i = 0; i < size; i++) {
        printf("%s %d $%d \n", car[i].name, car[i].year, car[i].price); 
    }
    return 0;
}