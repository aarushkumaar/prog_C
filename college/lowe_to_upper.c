#include <stdio.h>
#include <conio.h>
int main(){
    char str[100], upper_str[100]; 
    int i = 0, j = 0; 
    printf("\n Enter the string; "); 
    gets(str); 
    while (str[i] != '\0')
    {
        if (str[i]>= 'a' && str[i]<= 'z')
        {
            upper_str[j] = str[i] -32; 
        }
        else{
            upper_str[j] = str[i]; 
            i++, j++; 
        }

        
    }
    upper_str[j] = '\0'; 
    printf("\n The string converted into upper case is;" );
    puts(upper_str); 
    return 0;  
}