//factorial using for loop 

#include <stdio.h>
int main()
{
    int n = 0;
    int prod = 1; 
    for(int i = 1; i<=n; i++){
    prod*= i;
    } 
    printf("the factorial of %d is %d, \n", n,prod);
}