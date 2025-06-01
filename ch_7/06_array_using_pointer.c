/*
ek value ka address niakl lia, us se baaki values nikal lange.
*/

#include <stdio.h>
int main()
{
    int marks[] = {62, 63, 64, 65};

    // int* ptr = &marks[0]; //0 position wale ka address
    int *ptr = marks; // same as above for first value

    printf("the address of 63 is %d \n", ptr);
    for (int i = 1; i < 4; i++)
    {
        printf("the value at index %d, address %d is %d \n", i, ptr, *ptr);
        ptr++;
    }

    for (int i = 1; i < 4; i++)
    {
        printf("the value at index %d, address %p is %d \n", i, marks[i], marks[i]);
    }
    return 0;
}