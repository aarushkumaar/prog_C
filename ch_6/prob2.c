/*programme having variable i, 
print address of i, pass variable to a funciton and print it's address, are these addreesses same? why? 
*/

#include <stdio.h>
int return_5(int* ptr);
int return_5(int* ptr){
    printf("the value of ptr is %d \n", ptr );
    printf("the Adress of ptr is %p \n", &ptr);
    return 5; 
} 
int main(){ 
    int i = 2; 
    int* ptr = &i; 
    printf("the address of i is %p \n",  ptr );
    printf("the value at address %p is %d \n", ptr, *ptr ); 
}