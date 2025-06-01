// write a programme using function to find average of three numbers 

#include <stdio.h>

float average (int a, int b, int c); 

float average (int a, int b, int c){
    return (a +  b + c )/3.0; 
} 

int main(){
    int a = 3; 
    int b = 5; 
    int c = 9; 

    printf("the average of %d, %d, & %d is %f \n ", a, b, c, average(a, b,c)); 
    return 0; 
}

