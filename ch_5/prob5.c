/* programme using recurrsion to calculate nth element of  series 
each number is a sum of two preceding once. 
0,1,1,2,3,5,8,13, 21 
fab(n-1) + fab(n-2); 
*/
#include <stdio.h>

int fab(int); 
int fab(int n ){
    if(n == 0 ){
        return 0; // first number 
    }
    else if (n == 1 ){
        return 1; // second number 
    }

    return fab(n-1) + fab(n-2); 

}
int main()
{
    int n = 6; 
    printf ("the val of fibbonacci series is %d \n ", fab(6)); 
     return 0;
}
