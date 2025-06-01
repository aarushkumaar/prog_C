/*
C - mother langyuage 
low lever 
driver kernal 
hardware os etc 

*/
#include <stdio.h>
int main()
{
    int n = 4; 
    int *ptr1 = &n;
    int *ptr2 = &n;

    printf("Value of n: %d\n", n);
    // pointer before substration
    printf("Value of n using ptr1: %d\n", ptr1);
    // pointer after substration
    ptr2 = ptr2 - 3; // ptr 3 - 4*3
    printf("Value of n using ptr2 after subtraction: %d\n", ptr2);
    printf("The subs of ptr1: %d & ptr 2: %d is %d\n", ptr1, ptr2, (ptr1 - ptr2));

    return 0;
}