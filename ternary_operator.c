#include <stdio.h>
#include <stdbool.h>

int main(){
    
    bool isOnline = false;
    int number = 8;
    int age = 21;
    printf("%d is %s \n", number, (number%2 == 0)? "even" : "odd");
    printf("%s", (age > 18)? "adult" : "child");

}