#include<stdio.h>

int main(){

    //declearing variables
    int a;
    float f;
    double d;
    
    //taking input from user
    printf("enter the value for a\n");
    scanf( "%d", &a);

    printf("enter the valule for f\n");
    scanf("%f", &f);

    printf("enter the value for d\n");
    scanf("%lf", &d);

    //printing the values inserted by user
    printf("the value of a is %d\n",a);
    printf("the vlaue of f is %f\n", f);
    printf("the value of d is %lf\n", d);

    return 0;
}