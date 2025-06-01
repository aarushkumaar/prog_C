//check ask for age and check if the person can drive or not. 
#include <stdio.h>
int main()
{
    int age; 
    printf("enter your age ");
    scanf("%d",&age);
    printf("your age is %d\n:" , age);
        if(age>=60){
            printf("your age is %d, you are a senior certizen and you can drive", age);
        }
        //if the above code is true, it own't go to the "else if" wala code, and return is line ke uper upe 
        //if the above code is false, only then he it will go to the elseif part. 
        else if(age>=18){
             printf("your age is %d, you can drive", age);
        }
        else {
             printf("your age is %d, you can't drive", age);
        }
     return 0;
}