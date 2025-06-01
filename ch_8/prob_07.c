/*
write a programme to count the occurance of a given charecter in a string 
*/ 
#include <stdio.h>
#include <string.h>
int main()
{
    char c = 'a'; 
    int count = 0; 
    char str[] = "hello my name is aarush"; 
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == c){
            count += 1; 
        }
        
    }
    printf("%d", count); 

    return 0;
}