#include <stdio.h>
/*
TOWER OF HANOI
_ALGORITHM_
n -> number of discs
make a function hanoi(n, start, end)
    basic assumptons 
    1<= start <= 3
    1<= end <= 3
    start != end
    n >= 1

steps for recursive problem 
1. show f(1) works , base case 
2. show f(n-1) works 
3. show f(n) works using f(n-1)

*/

void towerHanoi(int n, char start, char aux, char end); 
void towerHanoi(int n, char start, char aux, char end){
    if(n==1){
        printf("\n Move disk 1 from %c to %c \n", start, end);
        return; 
    }

    //move n-1 from start to aux
    towerHanoi(n-1, start, end, aux); 
    printf("\n Move disk %d from %c to %c \n", n, start, end);

    //move n-2 from aux to dest
    towerHanoi(n-1, aux, start, end); 
}
int main()
{
    int n = 3; 
    printf("Steps to solve Tower of Hanoi with %d disks :\n", n); 
    towerHanoi(n, 'A', 'B', 'C'); 
    return 0;
}