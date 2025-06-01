/*
create an array of five complex number created in prob four,
and display the m with the help of a display function. the value
must be taken from the user
*/


#include <stdio.h>
typedef struct complex_Numb
{
    int real;
    int imagin;
} complex;

void display(complex complex_Numb)
{
    printf("the value of complex no is %d + i%d\n", complex_Numb.real, complex_Numb.imagin);
}
int main()
{
    complex carr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter the real part of Z\n");
        scanf("%d", &carr[i].real);
        printf("enter the imaginery part of Z\n");   
        scanf("%d", &carr[i].imagin);
        display (carr[i]); 
    }

    return 0;
}