#include <stdio.h>

int change(int b); 
int change(int b ){
    b = 77; 
    return 0; 
}

int main(){
    int b = 22; 
    change (b); //copy of b will go to function, no change in it. 
    printf ("the val of b is %d \n", b); 
    return 0; 
}
