/* find if the given year is a leap year or not 
for leap year- 
divisible by 4 and not divisible by 100 or  divisible by 400  */

#include <stdio.h>
int main(){
    int year; 
    printf("enter the year \n");
    scanf("%d", &year);
    int a = (year%4==0 && year%100!=0) || year%400 == 0;
    if (year = a ){
        printf("this is a leap yera"); 
    }
    else {printf(" this is not a leap year");}
    return 0;
}