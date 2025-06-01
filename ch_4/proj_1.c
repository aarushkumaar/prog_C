#include <stdio.h>
#include <time.h> // seed srand with current time 
#include <stdlib.h> //seed rand and srand

int main()
{
    int game_num; // Game number
    int guess_no; // Number entered by the user
    int no_of_guess = 0;

    srand(time(0)); 
    game_num = (rand() % 50) + 1; 
    do
    {
        // Asking for the user's guess
        printf("Guess a number: ");
        scanf("%d", &guess_no);
        no_of_guess++;

        if (guess_no > game_num)
        {
            printf("Guess a smaller number.\n");
        }
        else if (guess_no < game_num)
        {
            printf("Guess a higher number.\n");
        }

        // Offering a hint after three wrong attempts
        if ((no_of_guess == 3 || no_of_guess == 6) && guess_no != game_num)
        {
            char hint_choice;
            printf("Do you need a hint? (Y/N): ");
            scanf(" %c", &hint_choice); 
            if (hint_choice == 'Y' || hint_choice == 'y')
            {
                if (game_num % 2 == 0)
                {
                    printf("Hint: The number is even.\n");
                }
                else
                {
                    printf("Hint: The number is odd.\n");
                }
            }
        }

    } while (guess_no != game_num);

    printf("\n the number is %d and You guessed it in %d guesses.\n",game_num, no_of_guess);

    return 0;
}