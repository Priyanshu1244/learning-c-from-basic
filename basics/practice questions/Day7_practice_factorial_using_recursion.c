#include <stdio.h>

int factorial(int num);

int main()
{

    // declearing variables and getting input form user
    int num;
    printf("enter the number whose factorial you want : ");
    scanf("%d", &num);

    int fac = factorial(num);  //calling factorial function and sending arguments

    printf("factorial of %d is : %d\n", num, fac); // printing the factorial of given number

    return 0;
}

//recursive function
int factorial(int num){ 
    if (num==1){
        return 1;
    }
    int facNM1 = factorial(num-1);
    int fac = facNM1*num;
   
    return fac;
}