//sum of numbers occuring in the multiplication table of given number n 

#include <stdio.h>
int main()
{
    int n; 
    int sum = 0; 
    printf("enter the number to find sum of multiplicatin table \n");
    scanf("%d", &n);
    for(int i = 0; i<=10; i++){
        int a = i*n; 
        sum+=a;
        printf("%d X %d = %d \n", i, n, a);
    }
    printf("the sum of above is %d \n", sum);
     return 0;
}