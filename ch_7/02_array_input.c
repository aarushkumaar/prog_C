//create array of five value and taek input from user, use for loop 
#include <stdio.h>
int main()
{
    int marks[5];
    printf("enter marks obtained \n"); 
    for(int i=0; i<5; i++){
        scanf("%d", &marks[i]);
    }
    printf("the marks of 1 and 3 are %d & %d \n", marks[1], marks[3]);
    return 0;
}