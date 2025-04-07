#include<stdio.h>

int main(){

    //declearing variables
    int a = 5;
    float f = 6.53;
    double d = 4.3454;
    char c = '$';

    //getting the size of variables using "sizeof" operator
    printf("the value of a is %d and the size of a is %zu bytes\n",a, sizeof(a));
    printf("the value of f is %f and the size of f is %zu bytes\n",f, sizeof(f));
    printf("the value of d is %lf and the size of d is %zu bytes\n",d, sizeof(d));
    printf("the value of c is %c and the size of c is %zu bytes\n",c, sizeof(c));


    printf("_______________________________________________________________________________________________");

    return 0;
}