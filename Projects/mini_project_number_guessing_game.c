//including libraries
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()  
{

    //generating a random number for user to guess
    srand(time(0));
    int random_number = (rand() % 100) + 1;

    //declearing and initializing the variables
    int guess, attempts;
    attempts = 1;

    //getting first guess from user
    printf("welcome to number guessing game!\n");
    printf("enter your guess (between 1 to 100)\n");
    scanf("%d", &guess);

    if (guess == random_number) //if he guessed the number in first try
    {
        printf("congratulations! you have guessed the number in 1st attempt\n");
    }
    else //user keeps guessing till he gets the number right and updating attempts through this loop
    {
        while (guess != random_number)
        {
            if (guess < random_number)
            {
                printf("your guess is lesser than the number, try again\n");
                scanf("%d", &guess);
            }
            else if (guess > random_number)
            {
                printf("your guess is greater than the number, try again\n");
                scanf("%d", &guess);
            }
            attempts++;
        }

        printf("congratulations! you guessed the right number in %d\nThanks for playing\n", attempts);  //when user guess the right number
    }

    return 0;
}