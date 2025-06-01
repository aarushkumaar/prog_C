/*
ek value ka address niakl lia, us se baaki values nikal lange.
*/

#include <stdio.h>
int main()
{
    int marks[] = {62, 63, 64, 65, 66};

    // int* ptr = &marks[0]; //0 position wale ka address
    int *ptr = marks; // same as above for first value

    printf("the address of 62 is %d \n", ptr);
    for (int i = 1; i <= 5; i++)
    {
        printf("the value at index %d, address %d is %d \n", i, ptr, *ptr);
        ptr++;
    }

    for (int i = 0; i <= 5; i++)
    {
        printf("\nthe value at index %d, address %d is %d \n", i + 1, &marks[i], marks[i]);
    }
    return 0;
}