#include <stdio.h>

int main()
{
    int n, i, sum; //declearing variables

    printf("enter the number which you want to get sum upto\n");  //getting input from user
    scanf("%d", &n);

    sum = 0;  //initializing i and sum
    i = 1;

    while (i <= n)  //adding natural numbers upto n using while loop
    {
        sum = sum + i;
        i++;
    }

    printf("the sum of all natural numbers upto %d is : %d \n", n, sum); //printing the final sum

    return 0;
}