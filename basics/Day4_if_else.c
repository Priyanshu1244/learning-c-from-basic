#include <stdio.h>

int main()

{
    int age;  //declearing variable


    printf("enter you age\n");  //getting age from user 
    scanf("%d", &age);


    if (age >= 18){
        printf("you can drive\n");     //if input satisfies the this condition , this code runs
    }
    else{
        printf("you cannot drive\n");  //if input doesn't satisfies this condition , then this will run
    }
    
    return 0;
}