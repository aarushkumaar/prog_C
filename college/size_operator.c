#include <stdio.h>
int main()
{
    
    int i; 
    double d;
    char c; 
    float f; 

    printf("size of int: %zu bytes \n", sizeof(i));
    printf("size of double: %zu bytes \n", sizeof(d));
    printf("size of charecter: %zu bytes \n", sizeof(c));
    printf("size of float: %zu bytes \n", sizeof(f));
    
    return 0;
}