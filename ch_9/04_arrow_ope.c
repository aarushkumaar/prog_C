/*
insted of *ptr, we can use arrow operator to access structure properties 
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
    struct employee e1; 
    e1.code = 15; 
    struct employee *ptr; 
    ptr = &e1; 
    printf("%d\n", (*ptr).code);
    printf("%d\n", ptr->code);
}