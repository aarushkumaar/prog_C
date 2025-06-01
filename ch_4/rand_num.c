#include <stdio.h> 
#include <time.h> // for seeding srand with current time
#include <stdlib.h>  // for random and srandom 

int main(){
    int random_number; 
    srand(time(0)); //initialize random number generator 

    random_number = (rand() % 50) + 1; 
    printf("the random number is %d \n", random_number);
    return 0; 
}