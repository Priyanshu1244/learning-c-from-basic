#include <stdio.h>

int main()
{

    // int type pointer
    int i_value = 5;
    int *a; // pointer to store address of int type values
    a = &i_value;

    // float type pointer
    float f_value = 5.24;
    float *b; // pointer to store address of float type values
    b = &f_value;

    // double type pointer
    double d_value = 5.76427;
    double *c; // pointer to store address of double type values
    c = &d_value;

    // char type pointer
    char ch_value = '$';
    char *d; // pointer to store address of char type values
    d = &ch_value;

    // printing the address then value stored in int variable
    printf("the address of int variable is : %p\n", a);
    printf("the value at address of int variable is : %d\n", *a);

    // printing the address then value stored in float variable
    printf("the address of float variable is : %p\n", b);
    printf("the value at address of float variable is : %f\n", *b);

    // printing the address then value stored in double variable
    printf("the address of double variable is : %p\n", c);
    printf("the value at address of double variable is : %lf\n", *c);

    // printing the address then value stored in char variable
    printf("the address of char variable is : %p\n", d);
    printf("the value at address of char variable is : %c\n", *d);

    return 0;
}