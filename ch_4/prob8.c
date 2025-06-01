/* check weather a number is prime or not usign loops 
prime = number onyl divisible by one or itself, 
not prime = number divisible by more than two numbers  
*/

#include <stdio.h>
int main()
{
    int n = 5;
    int prime = 1; 
    for (int i = 2; i<=n; i++)
    {
        if(n%i == 0){
         prime = 0; 
        }
    }
    if(prime){
        printf("number is prime");
    } 
    else
    { printf("number is not prime"); }
    
}


//doubt