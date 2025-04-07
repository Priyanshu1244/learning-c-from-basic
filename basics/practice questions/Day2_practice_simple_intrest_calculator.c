#include<stdio.h>

int main(){

    //declearing pricipal amount, rate of intrest, and time
    float P,ROI,T;

    //getting pricipal amount from user
    printf("enter the principal amount\n");
    scanf("%f",&P);

    //getting Rate of intrest from user
    printf("enter the rate of intrest(in percentage)\n");
    scanf("%f",&ROI);

    //getting time from user
    printf("enter time (in years)\n");
    scanf("%f",&T);

    //printing SI
    printf("the simple intrest is : %f\n",(float)(P*ROI*T)/100);


    printf("__________________________________________________________________________");
    
    return 0;
}