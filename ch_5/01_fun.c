/* create a function to find sum of two numbers x and y 
int a = 1; 
int b = 2 
int c = a + b; 
printf ("the sum is %d, \n", c); 

liberary fn - functions defined by c 
user fn - functions made by the user 
*/

#include <stdio.h>

// function prototype 
int sum(int, int); 

//function defination 
int sum(int x, int y){
    printf("the sum is %d \n", x+y); 
    return (x+y); 
}

int main (){
    int a = 1;
    int b = 2;  
    sum(a,b); //funtion call  
    int c = a+b; 
    return 0; 
}