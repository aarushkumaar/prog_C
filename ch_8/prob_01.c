/*

TO UNDERSTAND AGAIN 


write a programme to take string as an input from the user using %c and %s 
and confirst that the strings are equal 
*/ 
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[6];
    char str2[6];
    printf("enter a string : \n");
    scanf("%s", str1);
    printf("the entered string one is %s \n", str1);

    //for string two
    for(int i = 0; i<5; i++){
        printf("enter the %d char of second string \n", i); 
        scanf("%c", &str2[i]);
        fflush(stdin); //it flushes out the new line charecter (enter) and not inlude it in the string 
    }
    str2[6] = '\0';
    printf("the value of string two is %s \n", str2);

    int a = strcmp(str1, str2);
    if(a == 0){
        printf("the two strings are equal"); 
    }
    else{
        printf("the two strings are not equal");
    }
    return 0;
}