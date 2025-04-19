#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n = 5;
    int *pointer;
    pointer = (int *)calloc(n, sizeof(int));

    // intialize
    for (int i = 0; i < n; i++)
    {

        printf("enter the number for pointer[%d]: ", i);
        scanf("%d", &pointer[i]);
    }

    n = 10;
    pointer = realloc(pointer, n * sizeof(int));

    // initalize new variables
    for (int i = 5; i < n; i++)
    {
        printf("enter the number for pointer[%d]: ", i);
        scanf("%d", &pointer[i]);
    }

    // printing
    for (int i = 0; i < n; i++)
    {

        printf("The number stored in for pointer[%d] is : %d\n", i, pointer[i]);
    }

    free(pointer);

    return 0;
}