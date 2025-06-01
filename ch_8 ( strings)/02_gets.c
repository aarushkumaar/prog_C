/*
gets- statement jo enter karte hai, vo vapis type kar deta hai 
puts- same as gets but print karne ke baad vo cursour next line mai daal deta hai 

fgets shoudl be used insted of gets due to some buffer overflow 
*/ \


#include <stdio.h>
int main()
{
    char st[30];
    gets(st); 
    printf("%s\n",st);
    return 0;
}