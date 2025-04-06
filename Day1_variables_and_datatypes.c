#include<stdio.h>

int main(){

    int a;  //declearing a INT type variable
    
    float f;  //declearing a FLOAT type variable

    double d;  //declearing a DOUBLE type variable

    char c;  //declearing a CHAR type variable

    //assagaining values to each

    a=4;
    f=4.234;
    d=5.34242434;
    c='%';

    // print each variable

    printf("the value of int is %d\n", a);       //%d is used for INT
    printf("hte value of float is %f\n", f);     //%f is used for FLOAT
    printf("the value of double is %lf\n", d);   //%lf is used for DOUBLE
    printf("the value of char is %c\n", c);      //%c is used for CHAR

    return 0;

}