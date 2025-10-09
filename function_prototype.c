#include <stdio.h>
#include <string.h>
#include <stdbool.h>
typedef char str;

typedef enum{
    SUCCESS, FAIL, PENDING  
}Status;

typedef struct{
    str name[50];
    int age;
    float gpa;
    bool status; 
}Student;

void printStudent(Student Student);

int main() {
    Student studentArray[] = {{"Gia Bao", 18, 4.0, true}, {"Phu Bui", 17, 4.0, false}};
    int size = sizeof(studentArray)/sizeof(studentArray[0]);
    for (int i = 0; i < size; i++){
        printf("%s \n", studentArray[i].name);
        printf("%d \n", studentArray[i].age);
        printf("%f \n", studentArray[i].gpa);
        printf("%s \n", (studentArray[i].status) ? "Full-time":"Part-time");
        printf("\n");
        }

    return 0;
}

