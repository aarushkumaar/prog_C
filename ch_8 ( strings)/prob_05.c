/*
write programme to encrypt a string by adding 1 to ascii value of it's char 
*/ 

#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "hello my name is aarush"; 
    for(int i = 0; i< strlen(str); i++){
        str[i] += 1; 
    }
    printf("%s", str); 
    
     return 0;
}