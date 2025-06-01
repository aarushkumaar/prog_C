#include <stdio.h>
#include <math.h>
int main()
{
    int sum = 0, a = 3, r = 2, n = 4; 
    /*
    Sum = sum of first n terms 
    a = first term 
    r = common ratio 
    n = number of terms 
    */ 
   if (r != 1)
   {
    sum = a*((pow(r,n) - 1)/(r-1)); 
   }
   else
   {
    sum = a*n; 
   }
   printf(" %d \n", sum);
    return 0;
}