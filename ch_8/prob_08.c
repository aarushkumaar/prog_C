/*
write a programme to check weather a given charecter is present in a string or not 
*/ 
#include <stdio.h>
#include <string.h>
int main()
{
    char c = 'r'; 
    int contain = 0; 
    char str[] = "hello hahah";
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == c){
            contain++; 
            break;
        }
    } 
    if(contain == 1){
        printf(" yes it contains %c\n",c);
    }
    else{
        printf(" no it doesn't contain %c\n",c);
    }


    return 0;
}