/* 
challange sum to change a value  
possible agar hum function ko variable ka address de de 
*/

/*
#include <stdio.h>

int sum(int , int); 
int sum(int a , int b){
     a = 7; 
    return (a + b); 
}

int main()
{
    int a = 6; 
    int b = 7; 
    printf("the sum of %d and %d is %d, \n", a, b, sum(a, b)); 
    printf("the value of a is %d \n", a);

    return 0;
}
*/


#include <stdio.h>

int sum(int * , int *); 
int sum(int* a , int* b){
     *a = 7; 
    return (*a + *b); 
}

int main()
{
    int a = 6; 
    int b = 7; 
    printf("the sum of %d and %d is %d, \n", a, b, sum(&a, &b)); 
    printf("the value of a is %d \n", a);

    return 0;
}
