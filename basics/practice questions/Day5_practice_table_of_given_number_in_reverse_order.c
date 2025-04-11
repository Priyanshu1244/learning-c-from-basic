#include <stdio.h>

int main()
{

    // declearing variables and getting input form user
    int num;
    printf("enter the number whose table you want in reverse order\n");
    scanf("%d", &num);

    int i = 20; // initializing i

    // printing the table of given number in reverse order using while loop
    while (i >= 1)
    {
        printf("%d*%d=%d\n", num, i, num * i);
        i--;
    }

    return 0;
}