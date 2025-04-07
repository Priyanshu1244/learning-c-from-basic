#include<stdio.h>

int main(){

    //declearing raidus, height and pi
    const float pi = 3.14;
    float radius,height;

    //getting the value of radius from user
    printf("enter the radius of cyclinder\n");
    scanf("%f",&radius);

    //getting the value of height from user
    printf("enter the height of cyclinder\n");
    scanf("%f",&height);

    //printing the volume of cyclinder
    printf("the volume of cirle is : %f\n",(float)pi*radius*radius*height);

    printf("______________________________________________________________________________________________");

    return 0;

}