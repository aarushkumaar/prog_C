#include <stdio.h>
int main()
{
    char i = 'A'; 
    char* j = &i; 
    printf("the address of %c is %p, \n ", i, j); 
     return 0;
}