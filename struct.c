#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct{
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
}Student;
void printStudent(Student student);
int main() {
    Student student1 = {"Ha My", 18, 4.0, true};
    Student student2 = {"Phu Bui", 18, 3.9, false};
    Student student4 = {0};
    
    strcpy(student4.name, "Tristan");
    student4.age = 18;
    student4.gpa = 4.0;
    student4.isFullTime = true;

    printStudent(student1);
    printStudent(student2);
}

void printStudent(Student student) {
    printf("%s \n", student.name);
    printf("%d \n", student.age); 
    printf("%.2f \n", student.gpa);
    printf("%s \n", (student.isFullTime)? "full time" : "part time");
    printf("\n");
}