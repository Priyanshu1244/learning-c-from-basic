#include <stdio.h>

int main()
{

    int n, i, fac; // declearing variables and getting input
    printf("enter the number whose factorial you want to find\n");
    scanf("%d", &n);

    fac = 1; // initailizing the value of factorail and i
    i = n;

    while (i >= 1) // getting the factorial using loop
    {
        fac = fac * i;
        i--;
    }

    printf("factorial of %d is %d\n", n, fac); // printing factorial

    return 0;
}