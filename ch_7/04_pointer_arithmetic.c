/*
ponter arithmetic 
pointer can be incrimented to point to the next memory locaion of that type 
*/

//POINTER ARITHMETIC USING INTEGER
// #include <stdio.h>
// int main()
// {
//     int a = 5; 
//     int* ptr = &a; 
//     printf("the address of %d is %u \n", a, ptr); 
//     printf("the address of %d is %u \n", a, &a); 
//     ptr++; 
//     printf("the address of %d is %d \n", a, ptr); //increased by four because it takes four bite in memory 
//     return 0;
// }


//POINTER ARITHMETIC USING CHARECTER 
#include <stdio.h> 
int main(){
    char a = 'A'; //taking only one byte
    char* ptr = &a; 
    printf("the address of %c is %d \n", a, ptr); 
    printf("the ascii val of %c is %d \n", a, a); 
    ptr++; 
    printf("the address of %c is %d \n", a, ptr); //iincreased by one becaue it takes one bite of space
    
    
}