//sum first 10 natural numbers using while loop 

/*
#include <stdio.h>
int main()
{
    int i = 0; 
    int sum = 0; 
    while(i<=10)
    {
        sum += i; 
        printf("the sum of first 10 natural numbers is - %d \n ", sum);
        i++;
    }
    return 0;
}
*/

//sum first 10 natural numbers using for loop 

#include <stdio.h>
int main()
{
    int sum = 0;
    for(int i = 0;i<11;i++){
        sum+=i;
        printf("the sum of first 10 numbers is %d, \n", sum);
    }
     return 0;
}