#include <stdio.h>

int main()
{

    int arr[3][2]; // declearing a 2D array

    for (int i = 0; i < 3; i++)
    { // asking the user for input for each element of array

        for (int j = 0; j < 2; j++)
        {
            printf("enter the %d,%d element of array : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // printing the array in matrix format
    for (int i = 0; i < 3; i++)
    { // loop for row

        for (int j = 0; j < 2; j++)
        { // loop for column
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}