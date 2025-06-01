#include <stdio.h>
#include <conio.h>
int main(){
    int str1[100], str2[100], str3[100];        //string lia jisme max 100 charecters can be added 
    int i = 0, j = 0;
    printf("\n Enter the frist number");        //taking input from user for the string
    gets(str1); 
    printf("\n Enter the second number");       // second string jo first ke end mai concaniate karna hai 
    gets(str2);                                 
    while (str1[i]= '\0')
    {
        str3[j] = str1[i];                       //phle first string ke charecters dal rahe hai 
        i++, j++; 
    }
    i=0; 
    while (str2[i] != '\0')
    {
        str3[j] = str2[i];                        //string of 3 mai string of 3 ke charecters dal rahe hai 
        i++; 
        j++; 
    }
    str3[j] = '\0'; 
    printf("\n The concanated string is : \n"); 
    puts(str3); 
    getch(); 
    return 0; 
      
} 