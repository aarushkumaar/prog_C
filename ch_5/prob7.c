//recurssive funciton to calculate sum of first n natural numbers 
//sum = 1+2+3+4...+(n-1)+ n 

#include <stdio.h> 

int sum(int); 
int sum(int n){
    if(n == 1 ){
        return 1; 
    }
    return sum(n-1) + n; 
}

int main(){
    int n = 10; 
    printf("the sum of first %d numbers is %d \n", n, sum(n)); 
    return 0; 
}
