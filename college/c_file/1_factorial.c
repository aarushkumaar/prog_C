#include <stdio.h>
int main()
{
    int n = 10; //to calculate factorial of ten 
    int facatorial = 1; 
    for(int i = 1; i<=n; i++){
        facatorial*=i;      // factorial = factorial * i
    }
    printf("the factorial of %d is %d" , n, facatorial); 
    return 0;
}