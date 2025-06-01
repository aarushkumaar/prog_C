//calculate tax paid by employees
// #include <stdio.h>
// int main(){
//         float income; 
//         printf("enter your income \n");
//         scanf("%f", &income); 
//         float tax1 = (5.0/100)*income;
//         float tax2 = (20.0/100)*income;
//         float tax3 = (30.0/100)*income;
//         if(income<2.5){
//             printf(" you are safe:)");
//         }
//         else if(income>2.5 && income<5.0){
//             float a = income - tax1; 
//             printf("you will have to pay %f tax on %f income ", a, income);
//         }
//         else if(income>=5.0 && income<10.0){
//             float b = income - tax2; 
//             printf("you will have to pay %f tax on %f income ", b, income);
//         }
//         else if(income>= 10.0){
//             float c = income - tax3; 
//             printf("you will have to pay %f tax on %f income ", c, income);
//         }
//     return 0;

#include <stdio.h>
int main(){
    int income; 
    int tax; 
    printf("enter your income in \n "); 
    scanf ("%d", &income);
    int tax1 = (0.05 * income);
    int tax2 = 0.05 * (250000-500000) + (0.2 * (income-500000));
    int tax3 =  0.05 * (500000-250000) + 0.2 * (1000000-500000)+ 0.3 * (income-1000000);
    if (income < 250000){
        printf("you dotn' ahve to pay any tax");
    }
    else if (income > 250000 && income < 500000){
    printf("you need ot pay %d tax", tax1);
    }
    else if (income >= 500000 && income < 1000000){
    printf("you need ot pay %d tax", tax2);
    }
    else if (income >= 100000){
    printf("you need ot pay %d tax", tax3);
    }    
    return 0 ; 
}