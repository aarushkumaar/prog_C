#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "aarush"; 

    //strlen() gives charecters excluding null charecter \0
    printf("%d\n", strlen(str));

    //strcpy() used to copy the contennt of second string into first string passed through it 
    //source string and target string 
    char st[] = "hello"; 
    char st2[50] = "no hello"; 
    char st3[50] = "ok hello"; 

    char target[30]; 
    strcpy(target, st); 
    printf("%s %s \n", st, target); 

    strcat(st2, st3); 
    printf("st", st2); 
    
    //strcmp() 
    //compares two strings, and returns zero if they  both are equal 
    //first word in ascii val firt =  -ve val 
    // second word in ascii vl first = +ve val 
    int a = strcmp("1afar", "Ajoke"); 
    printf("%d", a); 
    return 0;   
}