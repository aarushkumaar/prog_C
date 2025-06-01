/*
structures
can hold dissmilar data
always declared outside the main function 

*/ 

#include <stdio.h>
#include <string.h> 

struct employee{
    int code; //declares new user defined data type
    int salary; 
    char name[10];
};



int main()
{
    struct employee e1, e2; 
    e1.code = 4450; 
    strcpy(e1.name, "aarush"); 
    e1.salary = 54.56; 
    printf("%d, %f, %s,", e1.code, e1.salary, e1.name);     
    return 0;
}