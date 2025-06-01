/*
write a structure capable of storing dates,
 write function to compare those dates
*/

#include <stdio.h>
#include <string.h>
struct date
{
    int mm; 
    int dd; 
    int yyyy; 
};
void compare(struct date d1, struct date d2){
    int a = strcmp(d1.yyyy,d1.yyyy); 
    if(a == 1){
        printf("%d > %d", d1, d2); 
    }
    else if(a == (-1)){
        printf("%d > %d", d2, d1); 
    }
    else if(a == 0){
        printf("%d = %d", d1, d2); 
    }

}

int main()
{
    struct date d1 = {12, 04, 1014}; 
    struct date d2= {12, 04, 1015}; 
    compare(d1, d2); 
    return 0;
}