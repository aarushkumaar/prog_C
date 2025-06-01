/*
making structure arrays. 
*/ 
#include <stdio.h>
struct employee
{
    int code; //declares new user defined data type 
    float salary; 
    char name[10]; 
};

int main()
{
    struct employee facebook[100]; 
    facebook[0].code = 100; 
    facebook [1].code = 77;  
    struct employee aarush = {100, 71.22, "aarush" }; 
    printf("code - %d\n salary - %f\n name - %s\n ", aarush.code,aarush.salary, aarush.name); 
    return 0;
}