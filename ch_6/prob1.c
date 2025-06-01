//write programme to print address of variable, use this address to get the value of variable. 

#include <stdio.h>
int main()
{
    int a = 6; 
    int* i = &a; 

    printf("the address of variable %d is %p \n", a, i); 
    printf(" the value of variable at address %p is %d \n", i, *i);
    return 0;
}