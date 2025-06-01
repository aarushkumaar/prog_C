//print first n natural numbers, take n input
#include <stdio.h>
int main(){
    int n, i; 
    printf("enter the number \n ");
    scanf("%d", &n); 
    for (i = 1; i <= n; i++)
    {
        printf("the value of i is %d \n", i);
    }
    return 0;
}