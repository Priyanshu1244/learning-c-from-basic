#include <stdio.h>

int main()
{

    int i = 5; // int type variable

    int *ptr1 = &i;     // pointer to store the address of int type variable
    int **ptr2 = &ptr1;  // pointer to store the address of pointer that stores the address of variable
    int ***ptr3 = &ptr2;  // pointer to store the address of pointer that stores the address of pointer that stores the address of variable

    printf("the value of i is: %d\n",****(&ptr3));

    return 0;
}