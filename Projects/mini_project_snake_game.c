#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

#define width 105
#define height 25

char map[height][width];
int snake_x, snake_y;
int fruit_x, fruit_y;
int tail_length = 0;
int tailx[1000];
int taily[1000];

void play();
void initialize_map();

int main()
{

    srand(time(NULL));

    printf("welcome to the classic snake game, press enter to play\n");
    getchar();

    initialize_map();

    play();

    return 0;
}

void play()
{
    int gameover = 0;
    int score = 0;
    char direction = ' ';

    printf("\npress W/S/A/D to start\n\n");

    while (gameover == 0)
    {
        // 🆕 Move tail: shift all segments to follow head
        for (int i = tail_length; i > 0; i--)
        {
            tailx[i] = tailx[i - 1];
            taily[i] = taily[i - 1];
        }
        tailx[0] = snake_x;
        taily[0] = snake_y;

        if (_kbhit())
        {
            char temp = _getch();
            if (temp == 'w' || temp == 's' || temp == 'a' || temp == 'd')
            {
                direction = temp;
            }
        }

        switch (direction)
        {
        case 'w':
            snake_y--;
            break;
        case 's':
            snake_y++;
            break;
        case 'a':
            snake_x--;
            break;
        case 'd':
            snake_x++;
            break;
        default:
            break;
        }

        if (snake_x == 0 || snake_y == 0 || snake_x == width - 1 || snake_y == height - 1)
        {
            printf("\n\n\nyou hit the wall\n GAMEOVER!!!\n");
            gameover = 1;
            break;
        }

        
        else if (snake_x == fruit_x && snake_y == fruit_y)
        {
            score++;
            tail_length++;

            // fruit starting position
            fruit_x = ((rand() % (width - 2)) + 1);
            fruit_y = ((rand() % (height - 2)) + 1);
        }

        // redraw updated map
        system("cls");

        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {

                if (i == 0 || i == height - 1 || j == 0 || j == width - 1)
                {
                    printf("#");
                }else{
                    int printed = 0;

            if (i == snake_y && j == snake_x)
            {
                printf("O"); // head
                printed = 1;
            }
            else if (i == fruit_y && j == fruit_x)
            {
                printf("$"); // fruit
                printed = 1;
            }
            else
            {
                for (int k = 0; k < tail_length; k++)
                {
                    if (taily[k] == i && tailx[k] == j)
                    {
                        printf("o"); // tail
                        printed = 1;
                        break;
                    }
                }
            }

            // Print empty space if nothing else was printed
            if (printed == 0)
                printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n\n\nSCORE : %d \n", score);
        int S = (int)(120.0 / (score * 0.3 + 1));
        if (S < 20)
        {
            S = 20;
        }
        Sleep(S);
    }
}

void initialize_map()
{
    // snake staring position
    snake_x = width / 2;
    snake_y = height / 2;

    // fruit starting position
    fruit_x = ((rand() % (width - 2)) + 1);
    fruit_y = ((rand() % (height - 2)) + 1);
}
