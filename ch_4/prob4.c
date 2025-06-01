// programme to print multiplication table of 10 in reverse, 


#include <stdio.h>
int main()
{
    int n; 
    printf("enter a number to get multiplication tabel in reverse \n");
    scanf("%d", &n);
    for (int i = 10; i; i--) // runs until i is zero
    {
        int a = n*i; 
        printf("%d X %d = %d \n", i,n,a  );
    }
    
    return 0;
}