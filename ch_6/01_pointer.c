/*
Pointers are variables which stores the address of another variable 

kuch variable enter karange, toh us address par, vo value store ho jaygi, 
ADDRESS- contigious blocks 

agar variable banana hai jis mai address store karna hai, toh special variable banega , called POINTER
balti jis mai address store karten  

to find the address of i,  %p aata hai an &i 

* ->kya value hai (address mai value)
& - kya address hai (memory address of value)

jo variable address store kar raha hai, uska aapna bhi address hoga 


*/
#include <stdio.h>
int main()
{
    int i = 72; 
    int k = 73; 
    int* j = &i; // j is a pointer pointing to i, ie. j i ka addresss store kar raha hai, integer pointer 
    printf("the address of i is %p \n", &i);
    printf("the address of i is %p \n", j);
    printf("the address of i is %p \n", &k);
    printf("the address of i is %p \n", *(&j));
    // *(&i) = i 

    return 0; 
}