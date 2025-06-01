/* 
write a programme to change the value of variable to ten times it's current value 
*/

#include <stdio.h> 
void multy_ten(int* a); 
void multy_ten(int* a){
    *a = *a*10;     
}
int main (){
    int a = 5;  
    printf("the value of a is %d\n", a); 
    multy_ten(&a); 
    printf("the value of a is %d \n",a);
}