#include <stdio.h>
int fab(int n)
{
    if(n == 0 || n == 1){
            return n; 
        }
        return fab(n-1) + fab(n-2);
}
int main()
{
    int n = 10; 
    for( int i = 0; i<n; i++){
        printf("%d ", fab(i)); 
    }
    
    return 0;
}