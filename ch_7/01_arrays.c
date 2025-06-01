/*
arrays are collections of similar elements 
allows single elements to store multiple values 
continous memory locations are provided for this 

eg- to store the marks of a thousant students, we can't type thousand variables 
*/
#include <stdio.h>
int main()
{
    int marks[90]; //marks ke andar 90 integers can be stored(0-89)
    marks[1] = 5; 
    marks[0] = 52; 
    marks[89] = 100; 
    marks[900] = 20; // 90 is not included 
    printf("%d \n %d \n %d \n", marks[1], marks[900], marks[0]); 
     return 0;
}