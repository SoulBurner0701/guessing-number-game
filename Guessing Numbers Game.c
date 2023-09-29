/*
    Number: 50 (hidden) (random)
    40-50: very close! go higher.
    <40: go higher.

    50-60: very close! go lower.
    >60:

    OUTPUT:
    I've chosen a number. Try to guess it:

    You guessed it in 10 tries!! 1st Try: PERFECT, <5 Tries: Sugoi, >5: Nice
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    // Declarations
    int random_num, user_input;

    // Generating Random Number
    srand(time(0));
    random_num = rand() % 100 + 1;

    // Getting User Input
    do
    {
        printf("Guess a Number: \n", random_num);
        scanf("%d", &user_input);

        if (user_input == random_num)
        {
            printf("You guessed it right!\n", random_num);
        }

        else if (user_input != random_num && random_num < 101)
        {
            if (user_input > random_num - 10 && user_input < random_num)
            {
                printf("Very Close! Go Higher \n");
            }

            else if (user_input < random_num - 10)
            {
                printf("Go Higher!\n");
            }

            else if (user_input < random_num + 10 && user_input > random_num)
            {
                printf("Very Close! Go Lower \n");
            }

            else if (user_input > random_num + 10)
            {
                printf("Go Lower!\n");
            }

            else
            {
                printf("Invalid Input\n");
            }

            printf("You guessed it wrong!\n", random_num);
        }
        else
        {

            printf("Out of Bound");
        }

    } while (user_input != random_num);
}
