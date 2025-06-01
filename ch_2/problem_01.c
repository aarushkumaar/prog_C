//programme to check if a number is divisible by 97 or not
#include <stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d", &n); 
    int a = n%97; 
    printf("remainder is %d", a); 
    return 0;
}