#include <stdio.h>

void pattern(int row);
int main()
{
    int row;
    printf("enter the number of lines for the pattern\n");
    scanf("%d", &row);
    pattern(row);

    return 0;
}

void pattern(int row)
{
    int i = 0;

    while (i < row)
    {
        int j = 0;
        while (j < (2 * i) + 1)
        {

            printf("* ");

            j++;
        }

        printf("\n");
        i++;
    }
}