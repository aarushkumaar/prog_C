/*
 find if the given charecter is lower case or higher case
 approach - find the assci value of all lower case and upper case, 
 by if else, condiiton it by ascii value. 
 a=97
 z=122
 A= 65
 Z= 90
*/

#include <stdio.h>
int main()
{
    char letter; 
    printf("enter a letter to know if small case or uppercase \n");
    scanf("%c", &letter);
    printf("the given charecter is %c \n", letter);
    printf("the ascii value of %c is %d \n ", letter, letter);
    if(letter>= 97 && letter<=122){
        printf("\n the given letter is small");
    }
    else if (letter>= 65 && letter<= 90){
        printf("\n the letter is uppercase");
    }
    else{
        printf("can't  be determined");
    }
     return 0;
}