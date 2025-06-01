#include <stdio.h>
int main()
{
    // "+" is used to add values
    int a = 4;
    int b = 3; 
    int c = a + b; 
    printf("sum of\n a= %d \n b = %d is\n c = %d", a,b,c);

    /* "%"(modulus) is used to get the remainder 
        it cannot be applied on float*/
    int d = 4;
    int e = 3; 
    int f = a%b; 
    printf("the remainder of %d and %d is %d", d,e,f);
    return 0;
    /* ^ is not pre-defined as an exponient in C, you'll have to use 
       pow from <math.h> in order to use it as an exponient*/
    //arithmatic operation of two integers will always be an integer
     
}