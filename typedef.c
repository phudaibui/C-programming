#include <stdio.h>

typedef int number;
typedef char str[50];

int main() {
    
    number x = 3;
    number y = 4;
    number z = x + y;
    str name = "Phu Bui";
    str user1 = "Ha My";
    printf("%d \n", z);
    printf("%s \n", name);
    printf("%s \n", user1);
    return 0;
}