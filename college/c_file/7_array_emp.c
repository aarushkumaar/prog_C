#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    char role[10];
    int age;
    float salary;
};

int main() {
    int n, i;
    struct Employee emp[100];

    printf("Enter the no of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("Role (Manager/Worker): ");
        scanf("%s", emp[i].role);

        printf("Age: ");
        scanf("%d", &emp[i].age);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\nEmployee Records:\n");
    printf("--------------------------------------------------\n");
    printf("Name\tRole\t\tAge\tSalary\n");
    printf("--------------------------------------------------\n");

    for(i = 0; i < n; i++) {
        printf("%s\t%s\t\t%d\t%.2f\n", emp[i].name, emp[i].role, emp[i].age, emp[i].salary);
    }

    return 0;
}
