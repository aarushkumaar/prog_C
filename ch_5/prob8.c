/* 
    FUNCTION to print the following pattern of n lines 
    *       n = 1 
    ***     n = 2 
    *****   n = 3 

    //variations- ulta, bade se chotha 
*/
#include <stdio.h>

int main()
{
    int n = 10; 
    for (int i = 0; i < n; i++)
    {
        for (int s = 0; s < (2*i) + 1; s++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    

     return 0;
}