#include <stdio.h>

int main()
{
    int n, i, sum; // declearing variables

    printf("enter the number which you want to get sum upto\n"); // getting input from user
    scanf("%d", &n);

    sum = 0; // initializing sum for For loop

    for (i = 1; i <= n; i++) // getting sum upto n using for loop

    {
        sum = sum + i;
    }
    printf("the sum of all natural number upto %d using for loop is : %d\n", n, sum);  //printing sum (for loop)

    sum = 0; // intializing sum and i for do while loop
    i = 0;

    do // getting sum upto n using do while loop
    {
        sum = sum + i;
        i++;
    } while (i <= n);

    printf("the sum of all natural number upto %d using for do while loop is : %d\n", n, sum); //printing sum (do while loop)

    return 0;
}