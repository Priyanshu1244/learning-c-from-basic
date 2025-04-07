#include<stdio.h>

int main(){

    //declearing raidus and pi
    const float pi = 3.14;
    float radius;

    //getting the value of area from user
    printf("enter the radius of circle\n");
    scanf("%f",&radius);

    //printing the area of circle
    printf("the area of cirle is : %f\n",(float)pi*radius*radius);

    printf("______________________________________________________________________________________________");

    return 0;

}