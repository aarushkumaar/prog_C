#include <stdio.h>
struct Address{
    char street[100]; 
    char city[50]; 
    int zipCode; 
}; 

struct Employee{
    char name[50]; 
    int age; 
    struct Address address; 
}; 
int main()
{
    struct Employee emp = {"john", 30, {"123 Elm st", "springfueld", 12345}}; 
    printf("Name: %s")
    return 0;
}