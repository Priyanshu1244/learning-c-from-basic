#include <stdio.h>

int main()
{
    int n, prime;
    printf("enter the number to check if its prime or not\n");
    scanf("%d", &n);

    prime = 1;
    int i = 2;

    if (n == 1 || n == 0)
    {
        printf("%d is not a prime number\n", n);
    }
    else if (n == 2)
    {
        printf("%d is a prime number\n", n);
    }
    else
    {
        while (i < n)
        {
            if (n % i != 0)
            {
                prime = 1;
                i++;
            }
            else
            {
                prime = 0;
                break;
            }
        }
        switch (prime)
        {
        case 0:
            printf("%d is not a prime number\n", n);
            break;
        case 1:
            printf("%d is a prime number\n", n);
            break;
        }
    }
    return 0;
}