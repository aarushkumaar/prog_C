/*
write a program using fucntion which calculates the sum and average of two numbers 
use pointers and print the value of sum and avg in main 
*/

#include <stdio.h>

int sum(int, int); 
int sum(int a, int b){
    printf("the sum of %d and %d is %d\n", a, b, (a+b));
    return (a + b); 
}

float avg(float, float);
float avg(float a, float b){
    printf("the avg of %.1f and %.1f is %.2f\n", a, b, ((a+b)/2.0));
    return ((a+b)/2.0); 
} 

int main(){
    int a = 5.0; 
    int b = 10.0; 
    sum(a,b); 
    avg(a,b); 
    return 0; 
}