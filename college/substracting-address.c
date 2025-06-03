#include <stdio.h>
int main()
{
    int arr[]= {10, 20,30,40,50}; 

    int *ptr1 = &arr[0]; 
    int *ptr2 = &arr[1];  
    int difference = ptr2 - ptr1; 
    printf("difference between ptr2 and ptr1 is: %d elements \n", difference); 
    return 0;
}