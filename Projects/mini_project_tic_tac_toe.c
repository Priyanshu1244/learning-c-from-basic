#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void players_name(char player1[20], char player2[20]);
void tictactoeboard(char board[3][3]);
void play(char board[3][3]);

int main()
{
    char player1[20];
    char player2[20];

    printf("______________________________________________________________________________________________\n");
    printf("welcome to tic tac toe, press enter to continue\n");
    getchar();

    players_name(player1, player2);

    char board[3][3];

    tictactoeboard(board);

    play(board);

    return 0;
}

void players_name(char player1[20], char player2[20])
{

    int z;
    do
    {

        fflush(stdin);
        printf("enter player 1 name (X) : ");
        fgets(player1, sizeof(player1), stdin);
        fflush(stdin);

        printf("enter player 2 name (O) : ");
        fgets(player2, sizeof(player2), stdin);
        fflush(stdin);

        printf("both player name has been entered.\npress 1 to continue\npress 0 to enter names again\n");
        scanf("%d", &z);

    } while (z != 1);

    system("cls");
}

void tictactoeboard(char board[3][3])
{

    int k = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = k + '0';
            k++;
        }
    }

    for (int i = 0; i < 3; i++)
    { // loop for row

        for (int j = 0; j < 3; j++)
        { // loop for column
            printf(" %c ", board[i][j]);
            if (j < 2)
            {
                printf(" | ");
            }
        }
        if (i < 2)
        {

            printf("\n----+-----+----\n");
        }
    }
}

void play(char board[3][3])
{

    int turn = 2;
    char move;
    int a = 1;
    char symbol;
    int win;

    do
    {
        if (turn % 2 == 0)
        {
            printf("\n\nplayer 1 (X) turn.\n");
            symbol = 'X';
        }
        else
        {
            printf("\n\nplayer 2 (O) turn.\n");
            symbol = 'O';
        }
        do
        {

            printf("enter a number (1-9) to play your move : ");
            scanf(" %c", &move);
            if (move < '1' || move > '9')
            {
                printf("invalid move\n");
                a = 0;
            }
            else
            {
                a = 1;
            }

        } while (a != 1);

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] == move)
                {
                    board[i][j] = symbol;
                }
            }
        }
        system("cls");
        for (int i = 0; i < 3; i++)
        { // loop for row

            for (int j = 0; j < 3; j++)
            { // loop for column
                printf(" %c ", board[i][j]);
                if (j < 2)
                {
                    printf(" | ");
                }
            }
            if (i < 2)
            {

                printf("\n----+-----+----\n");
            }
        }
        turn++;
        win = 0;

        if (turn <= 10)
        {

            if ((board[0][0] == symbol && board[0][1] == symbol && board[0][2] == symbol) || (board[1][0] == symbol && board[1][1] == symbol && board[1][2] == symbol) || (board[2][0] == symbol && board[2][1] == symbol && board[2][2] == symbol))
            {
                win = 1;
            }
            else if ((board[0][0] == symbol && board[1][0] == symbol && board[2][0] == symbol) || (board[0][1] == symbol && board[1][1] == symbol && board[2][1] == symbol) || (board[0][2] == symbol && board[1][2] == symbol && board[2][2] == symbol))
            {
                win = 1;
            }
            else if ((board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol) || (board[0][2] == symbol && board[1][1] == symbol && board[2][0] == symbol))
            {
                win = 1;
            }
            else
            {
                win = 0;
            }
        }
        else
        {
            printf("its a draw\n");
            break;
        }

        if (win == 1 && symbol == 'X')
        {
            printf("\n\nplayer 1 has won\n");
            break;
        }
        else if (win == 1 && symbol == 'O')
        {
            printf("\n\nplayer 2 has won\n");
            break;
        }

    } while (1);
}