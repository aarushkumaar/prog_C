// function to calculate force of attraction on a body of mass m exerted by earth considering g = 9.8 
// f = mg 

#include <stdio.h>

float force(float); 
float force(float mass ){
    float g = 9.8; 
    return mass*g; 
}
int main()
{
    float mass = 45.0; 
    printf("the force for %f mass is %.1f \n ", mass, force(mass)); 
     return 0;
}