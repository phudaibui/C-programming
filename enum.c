#include <stdio.h>
/*
typedef char string[50];

typedef enum {
    SUNDAY, MONDAY, TUESDAY, WENDNESDAY, THURSDAY, FRIDAY, SATURDAY
}Day;
*/

typedef enum{
    SUCCESS, FAILURE, PENDING
}Status;

void connectStatus(Status status);

int main() {
/*
    Day today = TUESDAY;

    printf((today == SATURDAY||today == SUNDAY) ? "It's the weekend" : "It's a weekday");

    return 0;
*/
    Status status = SUCCESS;
    connectStatus(status);
    return 0;
}

void connectStatus(Status status) {
    switch (status)
    {
    case SUCCESS:
        printf("Connected successfully!");
        break;

    case FAILURE:
        printf("Connection failed");
        break;
    case PENDING:
        printf("Pending");
        break;
    default:
        break;
    }
}
