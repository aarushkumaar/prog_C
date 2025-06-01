/*
funciton call 
call by value- funciton ko values dete hai 
call by refrence - hum function ko address dete hai 


*/

#include <stdio.h>
int sum(int, int); 

    int sum(int a , int b){
        return a + b; 
    }

int main()
{
    int a = 1; 
    int b = 5; 
    printf ("the sum of a and b is %d, \n ", sum(a,b));
    return 0;
}