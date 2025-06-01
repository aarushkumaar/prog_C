/*
define your own datatype, mainly structure

#include <stdio.h>
int main()
{

    typedef int aarush; // int ki jaghe can write aarush
    aarush a;
        return 0;
}

*/

#include <stdio.h>
#include <string.h>

typedef struct employee //creating the structure in to a datatype 
{
    int code; 
    float salary; 
    char name[]; 
} emp; //the name you want it to call from 

int main()
{
    emp e1;  
    e1.code = 15;
    strcpy(e1.name, "aarush"); 
    printf("code - %d\nname - %s\n ", e1.code, e1.name); 
    return 0;
}