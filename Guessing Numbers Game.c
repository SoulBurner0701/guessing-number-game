#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    // Declarations
    int random_num, user_input, user_tries = 0;

    // Generating Random Number
    srand(time(0));
    random_num = rand() % 100 + 1;

    // Getting User Input
    do
    {
        printf("Guess a Number: ");
        scanf("%d", &user_input);

        if (user_input == random_num)
        {
            user_tries += 1;
            if (user_tries == 1)
                printf("PERFERCT! ");
            else if (user_tries < 5)
                printf("AMAZING! ");

            printf("You guessed it right in %d tries!\n", user_tries);
        }
        else if (user_input < 101 && user_input > 0)
        {
            if (abs(user_input - random_num) < 10)
                printf("Very Close! ");

            if (user_input < random_num)
                printf("Go Higher!\n");
            else
                printf("Go Lower!\n");

            printf("You guessed it wrong!\n");
            user_tries += 1;
        }
        else
        {
            printf("Out of Bounds\n");
        }
    } while (user_input != random_num);
}