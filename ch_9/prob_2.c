/*
create a two dimentional vector using structure in C
*/ 
#include <stdio.h> 
#include <string.h>

struct vector 
{
    int i; 
    int j; 
    int k; 
};

int main(){
    struct vector v = {1, 2}; 
    printf("the val of vector is %di + %dj +%dk", v.i, v.j, v.k); 
    return 0; 
}