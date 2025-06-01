/*
array of size 3 X 10 containing multiplication tables of the number 2,7 & 9 resp

*/ 
#include <stdio.h>
int main()
{
    int arr[3][10]; 
    int mul[] = {2,7,9}; 
    for(int i = 0; i<3; i++){
        for(int j = 1; j<11; j++){
            arr[i][j] = mul[i] * (j); 
        } 

    }
    for(int i = 0; i<3; i++){
        for(int j = 1; j<11; j++){
            printf("%d X %d = %d \n",mul[i], j,arr[i][j]);  
        } 
        printf("\n");
    }
    
    return 0;
}