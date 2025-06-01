//calculate area of a rectangle using math.h 
// pow function returns a double so %f has to be used insted of %d 

#include <stdio.h>
#include <math.h> 

int main()
{
    int a = 5; 
    printf("the area of square is %f \n ", pow(a, 2));      
     return 0;
}