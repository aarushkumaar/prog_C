/*
break- used to exit the loop irrespective of the condition being true or false
continue- skip iteration now, 
break- exit loop now 
*/

#include <stdio.h>
int main()
{
    for (int i = 0; i <= 15; i++)
    {
        if (i==5)
        {
            continue; //5 wala skip ho jayga
        }
        
        printf("the val of i is %d \n", i);
    }
    
     return 0;
}