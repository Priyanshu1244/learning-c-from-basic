#include<stdio.h>

int main(){

    int integer;

    printf("enter the integer to check its divisiblity by 5\n");  //getting the no. form user
    scanf("%d",&integer);

    printf("the remainder after dividing the integer by 5 is : %d\n",integer%5);  //printing the remainder 

    printf("if remainder is = 0 , its DIVISIBLE by 5\nif remainder is something else than 0 then its not DIVISIBLE\n"); //showing the answer

    printf("______________________________________________________________________________________________________________\n");

    return 0;

}