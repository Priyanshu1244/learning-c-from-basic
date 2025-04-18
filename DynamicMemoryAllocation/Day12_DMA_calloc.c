#include <stdio.h>
#include <stdlib.h> //stdlib to use DMA in C

int main()
{

    float n = 4;
    float *pointer;
    pointer = (float *)calloc(n, sizeof(float)); // allocation size for n interger using calloc

    // each variable is intialilzed as 0 because of calloc
    printf("%.2f\n", pointer[0]);
    printf("%.2f\n", pointer[1]);
    printf("%.2f\n", pointer[2]);
    printf("%.2f\n", pointer[3]);

    // initializing all variables
    pointer[0] = 2;
    pointer[1] = 4;
    pointer[2] = 6;
    pointer[3] = 343;

    // printing variables with maunually initalized values
    printf("%.2f\n", pointer[0]);
    printf("%.2f\n", pointer[1]);
    printf("%.2f\n", pointer[2]);
    printf("%.2f\n", pointer[3]);

    return 0;
}