#include <stdio.h>
int main(){
    int a = 5; 
    // printf("enter a number /a");
    // scanf("%d",a);
    switch(a){
        case 1:
            printf("you entered 1 \n");
            break; //switch statement se bahar niklna, else, neeche ka sab print ho jauga (maybe)
        case 2:
            printf("you entered 2 \n");
            break; 
       case 3:
            printf("you entered 3 \n");
            break; 
       default:
            printf("nothign matched ouch \n");
    }
}