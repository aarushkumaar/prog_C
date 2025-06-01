//evaluation order is always from right to left. 

#include <stdio.h>
int main()
{
    int a =4; 
    printf(" %d, %d, %d ", a, ++a, a++); 
     return 0;

     /*
     interview queston=- 
     which one is correct, 4,5,5, or 6,6,4 
     both are correct. if evalusation order is not defined, the compiler will start evaluation from right to left 
     */
}