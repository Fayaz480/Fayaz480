#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};
int main() {
    struct Employee emp;
    printf("Enter employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter employee name: ");
    scanf(" %s", emp.name);  
    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);
    printf("\nEmployee Details:\n");
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Salary: %.2f\n", emp.salary);

    return 0;
}
