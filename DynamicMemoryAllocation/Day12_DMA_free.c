#include <stdio.h>
#include <stdlib.h> //stdlib to use DMA in C

int main()
{

    float n = 4;
    float *pointer;
    pointer = (float *)calloc(n, sizeof(float)); // allocation size for n interger using calloc

    // initializing all variables
    pointer[0] = 2;
    pointer[1] = 4;
    pointer[2] = 6;
    pointer[3] = 343;

    // printing variables with initalized values
    printf("intialized values are : \n");
    printf("%.2f\n", pointer[0]);
    printf("%.2f\n", pointer[1]);
    printf("%.2f\n", pointer[2]);
    printf("%.2f\n", pointer[3]);

    free(pointer); // free all the data from pointer

    // re-initializing all variables
    pointer[0] = 200;
    pointer[1] = 400;
    pointer[2] = 600;
    pointer[3] = 34300;

    // printing variables with re-initalized values
    printf("re-intialized values are : \n");
    printf("%.2f\n", pointer[0]);
    printf("%.2f\n", pointer[1]);
    printf("%.2f\n", pointer[2]);
    printf("%.2f\n", pointer[3]);

    return 0;
}