#include <stdio.h>
#include <string.h>

// Nested structure: Address inside Employee
struct Address {
    char street[50];
    char city[30];
    int pin;
};

struct Employee {
    char name[50];
    int id;
    struct Address addr; // Nested structure
};

int main() {
    struct Employee emp;

    // Input
    strcpy(emp.name, "Alice");
    emp.id = 101;
    strcpy(emp.addr.street, "123 Main St");
    strcpy(emp.addr.city, "New Delhi");
    emp.addr.pin = 110001;

    // Output
    printf("Employee Information:\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Address: %s, %s - %d\n", emp.addr.street, emp.addr.city, emp.addr.pin);

    return 0;
}
