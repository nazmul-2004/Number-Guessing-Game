
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random number
int generateNumber()
{
    return rand() % 100 + 1;
}

// Function to check the guess
void checkGuess(int guess, int secretNumber)
{
    if (guess > secretNumber)
    {
        printf("Too high! Try again.\n");
    }
    else if (guess < secretNumber)
    {
        printf("Too low! Try again.\n");
    }
    else
    {
        printf("Congratulations! Correct guess.\n");
    }
}

// Main function
int main()
{
    int secretNumber;
    int guess;
    int attempts = 0;

    srand(time(0));

    secretNumber = generateNumber();

    printf("===== NUMBER GUESSING GAME =====\n");
    printf("Guess a number between 1 and 100.\n");

    while (1)
    {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);

        attempts++;

        checkGuess(guess, secretNumber);

        if (guess == secretNumber)
        {
            printf("Total attempts: %d\n", attempts);
            break;
        }
    }

    return 0;
}
