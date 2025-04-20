#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int play(int computer, int player); // function prototype

int main()
{
    int player;
    int computer;

    // generating a random choice for computer
    srand(time(NULL));

    printf("welcome to stone paper scissor,hit enter to play \n");
    getchar();

    int menu_choice;
    do
    {
        // assigning choice to computer
        computer = rand() % 3;

        // player chossing his choice
        printf("chose your input\n");
        printf("0-stone,1-paper,2-scissor,3-exit\n");
        scanf("%d", &player);

        switch (player)
        {
        case 0:
            menu_choice = play(computer, player);
            break;
        case 1:
            menu_choice = play(computer, player);
            break;
        case 2:
            menu_choice = play(computer, player);
            break;
        case 3:
            printf("exiting program\n");
            break;
        default:
            printf("invlaid input, try again\n");
            break;
        }

    } while (menu_choice != 3);

    return 0;
}

int play(int computer, int player) // function to run the game
{
    // strings to store player and computer choice
    char player_choice[10];
    char computer_choice[10];

    // choice of computer
    switch (computer)
    {
    case 0:
        strcpy(computer_choice, "stone");
        break;
    case 1:
        strcpy(computer_choice, "paper");
        break;
    case 2:
        strcpy(computer_choice, "scissor");
    }

    // choice of player
    switch (player)
    {
    case 0:
        strcpy(player_choice, "stone");
        break;
    case 1:
        strcpy(player_choice, "paper");
        break;
    case 2:
        strcpy(player_choice, "scissor");
    }

    printf("player choosed - %s\n", player_choice);
    printf("computer choosed - %s\n", computer_choice);

    // determining winner
    if (player == computer)
    {
        printf("its a draw\n");
    }
    else if ((player == 0 && computer == 2) || (player == 1 && computer == 0) || (player == 2 && computer == 1))
    {
        printf("player won\n");
    }
    else
    {
        printf("computer won\n");
    }

    // option to play again and exit
    int n;
    printf("enter 1 to play agian\nenter 3 to exit\n");
    scanf("%d", &n);
    return n;
}
