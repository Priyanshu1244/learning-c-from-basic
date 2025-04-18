#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n = 2;
    int *pointer;
    pointer = (int *)malloc(n * sizeof(int)); // allocation the space to store 2 variables intially

    // initializing printing the first two number in allocated space
    pointer[0] = 5;
    pointer[1] = 10;
    printf("%d\n", pointer[0]);
    printf("%d\n", pointer[1]);

    // reallocating more space to store 2 more variables
    int m = 4;
    pointer = (int *)realloc(pointer, m * sizeof(int));

    // initializing printing the other 2 number stored in reallocated space
    pointer[2] = 25;
    pointer[3] = 100;
    printf("%d\n", pointer[2]);
    printf("%d\n", pointer[3]);

    free(pointer); // freed the allocated space after use

    return 0;
}