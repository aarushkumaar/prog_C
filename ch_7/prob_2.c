/* create an array of 10 numbers, verify using pointer arethmetic that (ptr+2) points 
to the third element wehre ptr is a pointere pointing to the first element  

*/ 
#include <stdio.h>
int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10}; 
    int* ptr = &a[0];
    printf("the value at address %d is %d", ptr+3, *(ptr+3));  
    return 0;
}