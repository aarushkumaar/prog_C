/*
strings 
1D charecter array 
terminated by a null charecter, (\0), to mark the ending of a string 
collection of charecters 
*/
#include <stdio.h>
int main()
{
    // int str[] = {'a','b', 'v', '\0'}; 
    //or

    // char str[] = "abc"; // no null char used if using a double quote 
    // for(int i = 0; i<3; i++){
    //     printf("%c\n", str[i]);
    // }
    // return 0;

    //or

    char str[] = "abc"; 
    printf("%s", str); //scanf automitically adds a null char, no & because naam mai he address hota hai 
    return 0;
}