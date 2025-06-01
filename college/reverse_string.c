#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char str[100], rev_str[100],temp; //temp is a temperory location  
    int i = 0, j = 0; 
    printf("\n Enter the string ;");
    gets(str); 
    j = strlen(str) -1 ; 
    while (i < j)
    {
        temp = str[j]; 
        str [j] = str [i] ; 
        str [i] = temp; 
        i++; 
        j--; 
    }
    printf("\n the reversed string is ; "); 
    puts(str); 
    getch(); 
    return 0;
}



// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[100], temp;
//     int i = 0, j = 0;

//     printf("\n Enter the string: ");
//     fgets(str, sizeof(str), stdin); // Using fgets instead of gets

//     // Remove newline character from fgets
//     str[strcspn(str, "\n")] = '\0';

//     j = strlen(str) - 1;

//     while (i < j) // Corrected condition
//     {
//         temp = str[j];
//         str[j] = str[i];
//         str[i] = temp;
//         i++;
//         j--;
//     }

//     printf("\n The reversed string is: ");
//     puts(str);

//     return 0;
// }
