#include <stdio.h>

int main()
{

    int n, i;  //declearing variables and getting input
    printf("enter the number whose factorial you want to find\n");
    scanf("%d", &n);


    int fac = 1; //initailizing the value of factorail

    for (i = n; i >= 1; i--)  //running for loop to get factorail
    {
        fac = fac * i;
    }

    printf("factorial of %d is %d\n", n, fac);  //printing factorial

    return 0;
}