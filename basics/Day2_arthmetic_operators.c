#include<stdio.h>

int main(){

    //declearing variables
    int a = 3;
    int b = 5;
    int c = 4;
    int d = c+b;
 
    printf("sum of a and b is : %d\n",a+b);                                  //addition
    printf("difference of a and b is : %d\n",b-a);                           //subtraction
    printf("product of a and b is : %d\n",a*b);                              //multiplication
    printf("division of a from b is : %f\n",(float)a/b);                     //division
    printf("the remainder when d is c is divided by c is : %d\n",d%c);       //modulus
    printf("the sum of c and b is : %d\n",d);

    printf("_________________________________________________________________");

    return 0;
}