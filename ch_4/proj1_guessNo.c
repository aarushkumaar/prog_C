/*
generate numbers at random
write code to guess the number by taking input from user
provide a hint after 3rd and 6th guess
tell after how many guesses did the user guessed the correct number
*/

#include <stdio.h>
#include <stdlib.h> //srand and rand
#include <time.h>   // current time with srand

int main()
{
    int game_numb;
    int user_numb;
    int guess_numb = 0;
    char hint_choice;

    // choosing a number from 1-50 at random
    srand(time(0));
    game_numb = (rand() % 50) + 1;

    do
    {
        printf(" \n choose a number b/w 1-50 :  "); // taking input from user
        scanf("%d", &user_numb);
        guess_numb++;

        if (user_numb > game_numb)
        {
            printf("guess a smaller number \n ");
        }
        else if (user_numb < game_numb)
        {
            printf("guess a higher number");
        }
        // hint after three wrong attemps
        if ((guess_numb == 3 || guess_numb == 6) && user_numb != game_numb)
        {
            printf("do you want a hint? (Y/N)");
            scanf(" %c", &hint_choice);
            if (hint_choice == 'Y' || hint_choice == 'y')
            {
                if (game_numb % 2 == 0)
                {
                    printf("the number is even");
                }
                else
                {
                    printf("the number is odd");
                }
            }
        }

    } while (user_numb != game_numb);
    printf("The number was %d and you guessed it in %d attempts.", game_numb, guess_numb);
    return 0;
}