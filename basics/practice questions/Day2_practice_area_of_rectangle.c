#include<stdio.h>

int main(){

    float length,breadth;      //declearing length and breadth

    printf("enter the lenght of rectangle\n");    //getting length form user
    scanf("%f",&length);

    printf("ennter the breadth of rectangle\n");  //getting breadth from user
    scanf("%f",&breadth);

    printf("the area of rectangle is : %f\n",(float)length*breadth);    //printing the area of rectangle

    printf("_______________________________________________________________________________________________");

    return 0;
    
}