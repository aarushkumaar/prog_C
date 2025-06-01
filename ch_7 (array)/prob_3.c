/*
write a programme to create an array of 10 integrals and store multiplicaiton table of 5 in it 
*/


#include <stdio.h>
int main()
{
    int arr[10]; 
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 5*(i+1); 
    }
    for (int i = 1; i <= 10; i++)
    {
        printf("5 X %d = %d \n", i, arr[i]);
    }
    return 0;
}