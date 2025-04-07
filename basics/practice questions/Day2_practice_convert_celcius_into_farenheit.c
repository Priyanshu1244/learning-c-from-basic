#include<stdio.h>

int main(){

    //declearing celcius temperature
    float temp_in_celcius;

    //getting the celcius value from user
    printf("enter the temperature in celcius\n");
    scanf("%f",&temp_in_celcius);

    //printing the temperature in farenheit
    printf("the temperature in farenheit is : %f",(float)(temp_in_celcius*9/5)+32);

    return 0;
}