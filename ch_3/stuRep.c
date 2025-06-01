#include <stdio.h>
int main()
{
    int mark1, mark2, mark3; 
    printf("enter marks scored"); 
    scanf("%d", &mark1);
    printf("enter marks scored"); 
    scanf("%d", &mark2);
    printf("enter marks scored"); 
    scanf("%d", &mark3);
    printf("marks scored are %d, %d, %d, resp.", mark1, mark2, mark3); 
    int a = (mark1+mark2+mark3)/3 ;
    if (mark1<33 || mark2<33 || mark3<33){
        printf("you failed due to less marks");
    }
    else if (a>=40){
        printf("you passed ");
    }
    else{
        printf("you failed");
    }
     return 0;
}