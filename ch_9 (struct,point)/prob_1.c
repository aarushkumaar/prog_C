/*
write a programme to store input from user about three differen employees,
\employee name, code and salary 
*/ 
#include <stdio.h>

    struct employee
    {
        int code; 
        int salary; 
        char name[];
    };

int main()
{
    struct employee e1, e2, e3; 
    printf("enter the name :-");
    scanf("%s", &e1.name); 

    printf("enter the code :-");
    scanf("%d", &e1.code); 
    
    printf("enter the salary :-");
    scanf("%d", &e1.salary); 

    printf(" %s, %d, %d\n", e1.name, e1.code, e1.salary);
    
    
    printf("enter the name :-");
    scanf("%s", &e2.name); 

    printf("enter the code :-");
    scanf("%d", &e2.code); 
    
    printf("enter the salary :-");
    scanf("%s", &e2.salary); 

    printf(" %s, %d, %d\n", e2.name, e2.code, e2.salary);
    
    printf("enter the name :-");
    scanf("%s", &e3.name); 

    printf("enter the code :-");
    scanf("%d", &e3.code); 
    
    printf("enter the salary :-");
    scanf("%s", &e3.salary); 
    printf(" %s, %d, %d\n", e3.name, e3.code, e3.salary);
    
    return 0;
}