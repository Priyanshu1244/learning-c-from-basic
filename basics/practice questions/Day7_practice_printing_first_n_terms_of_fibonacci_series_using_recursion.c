#include <stdio.h>

int fibonacci(int num);

int main()
{

    // declearing variables and getting input form user
    int num;
    printf("enter the number till you want fibonacci : ");
    scanf("%d", &num);

    // running loop to print upto n terms
    for (int i = 0; i <= num; i++)
    {
        printf("%d\n", fibonacci(i));
    }
}

// recursive function
int fibonacci(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    int fibonacciNM1 = fibonacci(num - 1);
    int fibonacciNM2 = fibonacci(num - 2);
    int fibonacci = fibonacciNM1 + fibonacciNM2;
    return fibonacci;
}