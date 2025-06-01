/*
recurssion is a function in c which calls iteself 

example, taking factorial 

factorial(5) = 1 X 2 X 3 X 4 X 5
factorial(4) = 1 X 2 X 3 X 4
factorial(3) = 1 X 2 X 3 
factorial(2) = 1 X 2 
factorial(1) = 1 
factorial(n) = 1 X 2 X 3... X n-1 X n 
factorial(n-1) = 1 X 2 X 3... X n-1  

factorial n mai n-1 aa he raha hai 

*/

#include <stdio.h> 
 int factorial (int n); 
 int factorial (int n){
    if (n == 1 || n == 0 ){ //base condition, showing recurrsion is ending 
        return 1; 
    }

    //factorial (n) = factorial(n-1) X n 
    return factorial (n-1) * n; // function aapne aap ko call kar raha hai, compleating it 

 }

 int main(){
    int a = 3;
    int c = factorial (3); 
    printf("the factorial of %d is %d \n", a, c); 

 }