/*programme to print multiplication set of a given number n 
 1 * 4
 2 * 4 
*/

#include <stdio.h>
int main()
{
    int n; 
    printf("enter a number to get multiplication tabel \n");
    scanf("%d", &n);
    for (int i = 1; i < 11; i++)
    {
        int a = n*i; 
        printf("%d X %d = %d \n", i,n,a  );
    }
    
    return 0;
}