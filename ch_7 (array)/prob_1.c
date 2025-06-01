//create a 2d array taking input form the user 
// write display function to print the content of continous array on screen 

// #include <stdio.h>
// int main()
// {
//     int arr[3][2]; 
//     for (int i = 0; i<3; i++){
//         for(int j = 0; j<2; j++){
//             printf("enter the value of arr[%d][%d] \n", i, j); 
//             scanf("%d", &arr[i][j]); 
//         }
//     }

//     for (int i = 0; i<3; i++){
//         for(int j = 0; j<2; j++){
//             printf("the value of arr[%d][%d] is %d \n", i, j, arr[i][j]);
//         }
//     }

//     return 0;
// }


#include <stdio.h>
int main()
{
    int arr[2][3]; 
    for(int i = 0; i<2; i++){
        for(int j = 0; j<3; j++){
            printf("enter the value of arr[%d][%d]\n",i, j);
            scanf("%d", &arr[i][j]); 
        }
    }

    for(int i = 0; i<2; i++){
        for(int j = 0; j<3; j++){
            printf("[%d]\n", arr[i]);
        }
        printf("[%d]\n", arr[i]);
    }
    return 0;
}