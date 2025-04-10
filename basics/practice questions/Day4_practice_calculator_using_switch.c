#include <stdio.h>

int main()
{

    int num1, num2;   //declearing the variables
    char operator;

    printf("enter first number\n");   //getting operands and operators from user
    scanf("%d", &num1);

    printf("enter second number\n");
    scanf("%d", &num2);

    printf("enter operator (+,-,*,/)\n");
    scanf(" %c", &operator);    //added space before %c to handle new line buffer

    switch (operator)    //calculating and printing the final output
    {
    case '+':
        printf("%d\n", num1 + num2);
        break;
    case '-':
        printf("%d\n", num1 - num2);
        break;
    case '*':
        printf("%d\n", num1 * num2);
        break;
    case '/':
        printf("%d\n", num1 / num2);
        break;
    default:
        printf("invalid operator");
    }
    return 0;
}