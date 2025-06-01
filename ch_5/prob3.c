//function to convert celcius to farhenite 

#include <stdio.h>

float convert(float); 

float convert(float c ){
    return ((9.0/5.0) * c) + 32.0;  
}

int main()
{
    float c = 45.0; 
    printf ("the value of %f c in f is %.2f \n ",  c,  convert(c)); 
     return 0;
}