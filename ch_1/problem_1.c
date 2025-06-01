/* write a code to find the area of a rectangle, take input from the user */
#include <stdio.h>
int main()
{
    int length, breath;
    printf("enter length\n");
    scanf("%d", &length);
    printf("enter breath\n");
    scanf("%d", &breath);
    int a = length * breath;
    printf("the area of rectangle is %d", a);
    return 0;
}