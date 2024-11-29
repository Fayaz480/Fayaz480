#include <stdio.h>
struct Student {
    char collegeName[100];
    char name[50];
    int roll;
};
int main() {
    struct Student student;
    printf("Enter college name: ");
    scanf(" %s", student.collegeName); 

    printf("Enter student name: ");
    scanf(" %s", student.name);
    printf("Enter roll number: ");
    scanf("%d", &student.roll);
    printf("\n--- Student Details ---\n");
    printf("College Name: %s\n", student.collegeName);
    printf("Student Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.roll);

    return 0;
