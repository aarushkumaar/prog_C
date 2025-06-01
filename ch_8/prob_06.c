/*
write a programme to decrypt the string encrypted using encrypt funciton in prob 5 
*/ 
#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "ifmmp!nz!obnf!jt!bbsvti"; 
    for(int i = 0; i< strlen(str); i++){
        str[i] -= 1; 
    }
    printf("%s", str); 
    
     return 0;
}