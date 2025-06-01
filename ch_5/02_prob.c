//function to print GM,GA and GN, in order, and maybe, a loop, to print it all thrise one after another ie, gm, ga, gn, gm, ga, gn 
//function prototype 

#include <stdio.h>

void good_morning(); 
void good_afternoon(); 
void good_evening();
//function defination 
void good_morning(){
    printf("good morning \n");
} 
void good_afternoon(){
    printf("good afternoon \n");
} 
void good_evening(){
    printf("good evening \n");
} 

int main (){
    good_morning();
    good_afternoon();
    good_evening();
    return 0; 
}