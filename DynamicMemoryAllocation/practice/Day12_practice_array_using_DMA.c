#include <stdio.h>
#include <stdlib.h>

int main()
{
    // creating array dynamicallys
    int n = 6;
    int *pointer;
    pointer = (int *)calloc(n, sizeof(int));

    // intialize
    for (int i = 0; i < n; i++)
    {

        printf("enter the number for pointer[%d]: ", i);
        scanf("%d", &pointer[i]);
    }

    // printing
    for (int i = 0; i < n; i++)
    {

        printf("The number stored in for pointer[%d] is : %d\n", i, pointer[i]);
    }
    return 0;
}
