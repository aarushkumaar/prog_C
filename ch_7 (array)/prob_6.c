/*
funciton which counts the number of positive integers in an array
approach
define a variable , 
check if it's <0 or >0, 
if <0 , a += 1, 
else, return 
*/
#include <stdio.h>
int main()
{
    int arr[] = {-1, 0, 10, -15, -17, 7, 9, -4, -7, -8 }; 
    int size_arr = sizeof(arr); 
    int size_elem = sizeof(arr[1]); 
    int num_elem = size_arr/ size_elem; 
    int num_pos = 0; //dont forget to equate with zero, else garbage value
    int num_neg = 0; 
    for(int i = 0 ; i<num_elem ; i++){
        // if(0<arr[i]){
        //     num_pos += 1; 
        // }
        if(0>arr[i]){
            num_neg +=1; 
        }
        else(num_pos += 1); 
    }
    printf("the number of +ve int are %d \n", num_pos); 
    printf("the number of -ve int are %d \n", num_neg); 
    return 0;
}
