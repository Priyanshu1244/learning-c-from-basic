#include <stdio.h>

int power(int num, int exponent);

int main()
{

    // declearing variables and getting input form user
    int num,exponent;
    printf("enter the number whose exponential value you want to find : ");
    scanf("%d", &num);
    printf("\nenter the exponential value on %d : ",num);
    scanf("%d", &exponent);

    int final_value = power(num,exponent);  //calling power function function and sending arguments

    printf("\nthe value of %d^%d is : %d\n", num, exponent, final_value); // printing the final answer 

    return 0;
}

//recursive function
int power(int num, int exponent){ 
    if (exponent==0){
        return 1;
    }
    int powerNM1 = power(num,exponent-1);
    int final_value = powerNM1*num;
   
    return final_value;
}