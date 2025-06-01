/*
DO AGAIN 


writea function to slice string it should change the orignal string 
such that it is now the sliced strign. take 'm' and 'n' as the start 
and ending position for slice. 
*/  
char* slice(char str[], int m, int n){
    int i = 0, count; 
    char *ptr1 = &str[m]; 
    char *ptr2 = &str[n]; 

    str = ptr1; 
    str[n] = '\0'; 
    return str; 
}
#include <stdio.h>
int main()
{
    char str[] = "harry bhai"; 
    printf("%s", slice(str, 1, 7));
    return 0;
}