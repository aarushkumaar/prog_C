/*
programme which reverses the array passed to it
for swapping 
a, b 
temp = a, 
a = b, 
b = temp 
*/


#include <stdio.h>

void Pri_Arr(int a[], int n); 
void Pri_Arr( int a[], int n){
    for(int i = 0; i < n; i++){
        printf("%d", a[i]);
    }
    printf("\n");
}

/*
0 - 5
1 - 5
2 - 3 
se swap karna hai 

i from 0 to 2 
i  swap form n-1-i

or 

ifrom 0 to n/2
arr[i] swap by arr[n-i-1]
*/ 
void rev_arr(int arr[], int n); 
void rev_arr(int arr[], int n){
    int temp; 
    for (int i = 0; i < n/2; i++){
        temp = arr[i]; 
        arr[i] = arr[n - i - 1]; 
        arr[n - i - 1] = temp;  
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    int size_arr = sizeof(arr); 
    int size_elem = sizeof(arr[0]);
    int Num_elem = size_arr/size_elem;
     
    
    Pri_Arr(arr, Num_elem); 
    rev_arr(arr, Num_elem); 
    Pri_Arr(arr, Num_elem); 
    return 0; 
}