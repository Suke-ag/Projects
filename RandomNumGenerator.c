#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, newGame;
    start:
    srand(time(0));
    number = rand() % 100 + 1; // Generate random number between 1 and 100
    // printf("The Number is %d\n", number);
    // Keep running the loop until the number
    int nguesses = 1;
    
    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {   printf("Lower number please!\n");
        }
        else if (guess < number)
        {   printf("Higher number please!\n");
        }
        else
        {   printf("You guessed it in %d attempts\n", nguesses);
        }
        nguesses++;
    } while (guess != number);
    printf("NEW GAME press 1\n");
    printf("EXIT GAME press 2\n");
    scanf("%d",&newGame);
    if (newGame == 1){
        goto start;
    }
    else {
        time(10);
        exit;
    }
    return 0;
}