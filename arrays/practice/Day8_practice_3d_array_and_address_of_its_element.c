#include <stdio.h>

int main()
{

    int array[2][2][3];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("the address of array[%d][%d][%d] is : %u\n", i, j, k, &array[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}