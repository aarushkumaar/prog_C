/* 
write a programme to change the value of variable to ten power it's current value 
*/

#include<stdio.h>
void power_n(int* a); 
void power_n(int* a){
    int base = *a;  
    for(int i = 1; i<=2; i++){
        *a *= base; 
    }
}
int main(){
    int n = 5; 
    printf("the value of n is %d \n", n); 
    power_n(&n);
    printf("the value of n^n is %d \n", n);  
}