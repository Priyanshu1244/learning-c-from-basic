#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void players_name(char player1[50], char player2[50]);
void tictactoeboard(char board[3][3], char player1[50], char player2[50], int draw, int win1, int win2);
void play(char board[3][3], char player1[50], char player2[50], int *draw, int *win1, int *win2);
int move_validation(char move[10], char board[3][3]);

int main()
{
    char player1[50];
    char player2[50];

    printf("______________________________________________________________________________________________\n");
    printf("welcome to tic tac toe, press enter to continue\n");
    getchar();

    players_name(player1, player2);

    char board[3][3];
    int draw, win1, win2;
    draw = win1 = win2 = 0;

    int playorexit;
    do
    {

        tictactoeboard(board, player1, player2,draw,win1,win2);

        play(board, player1, player2, &draw, &win1, &win2);

        printf("thanks for playing\n");
        printf("1-play again\n0-exit\n");
        printf("waiting for input : ");
        scanf("%d", &playorexit);

        if (playorexit == 0)
        {
            printf("exiting program\n");
        }
        else
        {
            system("cls");
        }

    } while (playorexit != 0);

    return 0;
}

void players_name(char player1[50], char player2[50])
{

    int z;
    do
    {

        fflush(stdin);
        printf("enter player 1 name (X) : ");
        gets(player1);
        fflush(stdin);

        printf("enter player 2 name (O) : ");
        gets(player2);
        fflush(stdin);

        printf("both player name has been entered.\npress 1 to continue\npress 0 to enter names again\n");
        scanf("%d", &z);

    } while (z != 1);

    system("cls");
}

void tictactoeboard(char board[3][3], char player1[50], char player2[50], int draw, int win1, int win2)
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

    printf("draw : %d    %s : %d    %s : %d\n\n\n", draw, player1, win1, player2, win2);
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

void play(char board[3][3], char player1[50], char player2[50], int *draw, int *win1, int *win2)
{

    int turn = 2;
    char move[10];
    int a;
    char symbol;
    int win;

    do
    {
        if (turn % 2 == 0)
        {
            printf("\n\n%s (X) turn.\n", player1);
            symbol = 'X';
        }
        else
        {
            printf("\n\n%s (O) turn.\n", player2);
            symbol = 'O';
        }
        do
        {

            printf("enter a number (1-9) to play your move : ");
            scanf(" %s", &move);
            fflush(stdin);

            a = move_validation(move, board);

        } while (a == 0);

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] == move[0])
                {
                    board[i][j] = symbol;
                }
            }
        }

        system("cls");

        printf("draw : %d    %s : %d    %s : %d\n\n\n", *draw, player1, *win1, player2, *win2);

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
            printf("\n\nits a draw\n");
            (*draw)++;
            break;
        }

        if (win == 1 && symbol == 'X')
        {
            printf("\n\n%s (X) has won\n", player1);
            (*win1)++;
            break;
        }
        else if (win == 1 && symbol == 'O')
        {
            printf("\n\n%s (O) has won\n", player2);
            (*win2)++;
            break;
        }

    } while (1);
}

int move_validation(char move[10], char board[3][3])
{

    if (strlen(move) != 1 || move[0] < '1' || move[0] > '9')
    {
        printf("invalid move, enter number between 1 to 9\n");
        return 0;
    }
    else if ((move[0] == '1' && (board[0][0] == 'X' || board[0][0] == 'O')) ||
             (move[0] == '2' && (board[0][1] == 'X' || board[0][1] == 'O')) ||
             (move[0] == '3' && (board[0][2] == 'X' || board[0][2] == 'O')) ||
             (move[0] == '4' && (board[1][0] == 'X' || board[1][0] == 'O')) ||
             (move[0] == '5' && (board[1][1] == 'X' || board[1][1] == 'O')) ||
             (move[0] == '6' && (board[1][2] == 'X' || board[1][2] == 'O')) ||
             (move[0] == '7' && (board[2][0] == 'X' || board[2][0] == 'O')) ||
             (move[0] == '8' && (board[2][1] == 'X' || board[2][1] == 'O')) ||
             (move[0] == '9' && (board[2][2] == 'X' || board[2][2] == 'O')))
    {
        printf("That position is already taken. Try another.\n");
        return 0;
    }

    else
    {
        return 1;
    }
}