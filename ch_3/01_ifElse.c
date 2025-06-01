#include <stdio.h>
int main()
{
    int age = 5; 
    if(age>10){
        printf("your age is greatere than 10");
    }
    else{
        printf("you are underage");
    }
     return 0;
}

//ternary expression
int main()
{
    int a = 5; 
    int b = 10; 
    a>b?printf("%d is greater than %d", a,b):printf("%d is greater than %d", b,a);
}