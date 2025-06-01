//write a programme to convert celcius to fahrenhite 
#include <stdio.h>
int main()
{
    float farh,a;
    int celc; 
    printf("enter temperature in celcious \n");
    scanf("%d",&celc);
    farh = ( 9.0 /5 )*celc + 32; 
    printf("the value in farhanite scale is %.2f \n", farh);
    return 0;
}
