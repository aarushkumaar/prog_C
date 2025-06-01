/*
write your own version of strlen function form string.h
*/ 

int strlen(char str[]); 
int strlen(char str[]){
    int i = 0; 
    int count = 0; 
    char c = str[i]; 
    while(c!= '\0'){ //tab tak while loop chalega jab tak charecter null na ho jaaye
        c = str[i]; 
        i++;
    }
    count = i-1; 
    return count; 
}

#include <stdio.h>
int main()
{
    char str[] = "aarush"; 
    prinf ("%d", strlen(str)); 
    
    return 0;
}