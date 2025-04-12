#include <stdio.h>

int main()
{

    // declearing variables and getting input form user
    int num, sum;
    printf("enter the number whose sum of numbers in its table you want\n");
    scanf("%d", &num);

    int i = 1; // initializing i and sum
    sum = 0;

    // getting the sum of numbers of it's table of the given number using while loop
    while (i <= 10)
    {
        sum = sum + (num * i);
        i++;
    }

    printf("sum of all the numbers that occur in %d's table is : %d\n", num, sum); // printing the value of final sum

    return 0;
}