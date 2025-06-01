/* learn that memory location are continous 
array can be accesed with the help of pointer. 
phle var ka memory address de do, baaki aage ka plus I kar ke nikal jauga 

*/ 
#include<stdio.h>
int main(){
    int marks[5]; 
    
    for(int i = 0; i<5; i++){
        printf("enter marks obtained by the student " );
        scanf("%d", &marks[i]); 
    }

    for(int i = 1; i<=5; i++){
        printf("the address of %d is %p \n", i, &marks[i]); 
    }
    return 0; 
}