/*
programme to create array of  10 integers and store multiplicatin table of  user input in it 
*/
#include <stdio.h>
int main()
{
    int arr[10]; 
    int user_numb;  
    printf("enter a number to store multiplicaiton table of "); 
    scanf("%d", &user_numb); 
    for(int i = 0; i<10; i++){
        arr[i] = (user_numb*(i+1)); 
        printf(" %d X %d = %d\n", user_numb, (i+1), arr[i]);
    }
    printf("the value at position 2 of array is %d ", arr[2]); 
    return 0;
}