/*
write a programme with a structure represenating complex number 
*/ 
#include <stdio.h>
typedef struct c{
    int real; 
    int imagin; 
}complex;

int main()
{
    complex z = {1, 2}; 
    printf("%d + i%d\n",z.real, z.imagin); 

    return 0;
}