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

typedef struct patient{ 
    int id; 
    float bill; 
    char pat_name; 
}patient; 
int main()
{
    struct employee e1; 
    e1.code = 15; 
    struct employee *ptr; 
    ptr = &e1; 
    printf("%d\n", (*ptr).code);
    printf("%d\n", ptr->code);

    //or

    patient p1; 
    patient* ptr1;
    ptr1 = &p1; 
    ptr1 ->id = 1055;
    printf("the id of %d is - %d\n", p1, ptr1->id); 
    return 0; 



}

