#include <stdio.h>
#include <stdlib.h> //stdlib to use DMA in C

int main()
{

    int n = 4;
    int *pointer;
    pointer = (int *)malloc(n * sizeof(int)); // allocation size for n interger using malloc

    // intializing each one
    pointer[0] = 2;
    pointer[1] = 4;
    pointer[2] = 6;
    pointer[3] = 343;

    // printing each one
    printf("%d\n", pointer[0]);
    printf("%d\n", pointer[1]);
    printf("%d\n", pointer[2]);
    printf("%d\n", pointer[3]);

    return 0;
}